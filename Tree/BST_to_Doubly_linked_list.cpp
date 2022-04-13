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
        ll arr[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i] * arr[j]) > 0)
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
