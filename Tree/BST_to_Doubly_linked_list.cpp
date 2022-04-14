/*
//
The approach is based on the inorder traversal of the bst wiht the processing of the nodes.
The approach is based on the recursive call of the function in which we first go to the left most element then we process that node and then we process the right most element .

//The code of the above implementation is

Node *prev=NULL;
Node *BST_to_DLL(Node *root)
{
    if(root==NULL)
    {
        return root;
    }
    Node *head =BST_to_DLL(root->left);
    if(prev==NULL)
    {
        head =root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BST_to_DLL(root->right);
    return head;
}


// The time complixity of the code is O(n);
// The auxiliary space of the code is O(h) where h is the height of the tree.

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll rem = 0, count = 0;

        if (n >= 5)
        {
            count = n / 5;
            n = n % 5;
            if (n >= 3)
            {
                count = count + n / 3;
                n = n % 3;
                if (n >= 1)
                {
                    count = count + n / 1;
                    n = n % 1;
                }
            }
            else
            {
                count = count + n / 1;
                n = n % 1;
            }
        }
        else if (n >= 3 && n < 5)
        {
            count = n / 3;
            n = n % 3;
            if (n >= 1)
            {
                count = count + n / 1;
                n = n % 1;
            }
        }
        else
        {
            count = n / 1;
            n = n % 1;
        }
        cout << count << endl;
    }

    return 0;
}