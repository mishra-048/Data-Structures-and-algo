/*
//We are pushing each row in th equeue one by one and comparing the entire level 

int maxWidth(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    queue<Node *>q;
    q.push(root);
    int res=0;
    while(q.empty()==false)
    {
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++)
        {
            Node *curr=q.top();
            q.pop();
            if(curr->left !=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right !=NULL)
            {
                q.push(curr->right);
            }
        }
    }
    return res;
}


// The time complixity of the code is O(n)
// Auxiliary space is O(n).
*/ 