/*
A tree whose left and right children's sum is equal to the root element.
The children sum property is followed by the NULL tree as well as the single root tree also;
ex: 5 -> single element present in the tree
    NULL ->The NULL tree
          20
         /  \
       8     12
      / \               //8+12=20
     3   5              //3+5=8

        10
       /  \
      8    2               //8+2=10
          /
         2              //2+0=2


//Logic implementation using the code.

void children_sum(NOde *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left == NULL && root->right)
    {
        return true;
    }
    int sum=0;
    if(root->left !=NULL)
    {
        sum+=root->left->key;
    }
    if(root->right !=NULL)
    {
        sum+=root->right->key;
    }
    return (root->key == sum && children_sum(root->left) && children_sum(root->right));
}

*/