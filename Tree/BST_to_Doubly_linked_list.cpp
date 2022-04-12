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