/*
//Function for returning the maximum in the binary tree

int getMax(Node *root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key,max(getMax(root->left),getMax(root->right)));
    }
}
// Time complixity is O(n);
// Auxiliary space is O(h);
*/