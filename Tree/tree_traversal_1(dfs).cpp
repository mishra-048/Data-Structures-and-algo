/*
Two types of traversal;
i)Breadth for Search
ii)Depth for Search
    a)inorder   ->    (left , root , right)
    b)preorder  ->    (root , left , right)
    c)postorder ->    (left , right , root)

*/

//***** Depth For Search *****//
/*
//preorder traversal
void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//Time complixity is O(n);
//Auxiliary space is O(h);

*/

/*
//inorder tree traversal
void inorder(Node *root)
{
    if(root !=NULL)
    {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

//Time complixity is O(n);
//Auxiliary space is O(h);
*/

/*
//postorder traversal
void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<(root->key)<<" ";
    }
}

//Time complixity is O(n);
//Auxiliary Space is O(h);

*/
