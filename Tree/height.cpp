/*
//The height of the binary tree is maximum length from root to the leaf of the tree.

//Implementation

void get_height(Node *root)
{
    if(root ==NULL)
    {
        return 0;
    }
    else
    {
        return max(get_height(root->left),get_height(root->right))+1;
    }
}

//Time complexity is O(n);
//Auxiliary Space is O(h);
*/