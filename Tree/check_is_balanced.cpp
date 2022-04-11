/*
There are two methods for the given problem one

//The first one is the Native Solution.

//code
bool is_Balanced(NOde *root)
{
    if(root==NULL)
    {
        return true;
    }
    int left_h=height(root->left);
    int right_h=height(root->right);
    return (abs(left_h-right_h)<=1 && is_Balanced(root->left) && is_Balanced(root->right));
}



//The second method is based on the concept of using the individual height of each node
//Using the left height of the tree and the right height and comparing them and if the
  difference of both of them is > 1 it will return -1 other wise it will return the height
  of the current node to the root node to compare it with the right height.


//Code implementation

int Is_Balanced(Node *root)
{
    if(root==NULL)
    {
        retrun 0;
    }
    int left_h=Is_Balanced(root->left);
    if(left_h==-1)
    {
        return -1;
    }
    int right_h=Is_Balanced(root->right);
    if(right_h==-1)
    {
        return -1;
    }
    if(abs(left_height-right_height)>1)
    {
        return -1;
    }
    else
    {
        return max(left_h,right_h)+1;
    }

    //Time complixity is O(n);
}

                                      8
                                   /    \
                                 12      15
                               /   \       \
                             13     14      16
                                              \
                                               17





*/