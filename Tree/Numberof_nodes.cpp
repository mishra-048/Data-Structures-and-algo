/*
//Function for returning the size of the binary tree.
int get_size(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return 1+get_size(root->left)+get_size(root->right);
    }
}

// Time complixity is O(n);
//Auxiliary Space is O(h);
*/