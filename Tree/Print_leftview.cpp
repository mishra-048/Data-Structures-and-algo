/*
//Printing the left view of the binary tree
//method 1;

int maxlevel=0;
void printleft(Node *root,int level)
{
    if(root==NULL)
    {
        return ;
    }
    if(maxlevel<level)
    {
        cout<<(root->key);
        maxlevel=level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}
void printleftView(Node *root)
{
    printleft(root,1);
}





*/