/*

//This code is based on the inorder traversal of the BST.
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

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int sum = n * x, avg = 0, ans = 0;
        int arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            avg += arr[i];
        }
        ans = sum - avg;
        if (ans <= 0)
            cout << "0" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
