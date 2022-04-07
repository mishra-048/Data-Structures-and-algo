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
------------------------------------------

//method 2;
void printleft(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false)
    {
        int count= q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr=q.top();
            q.pop();
            if(i==0)
            {
                cout<<(curr->key)<<" ";
            }
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
    }
}



*/