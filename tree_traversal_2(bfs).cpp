/*
//One idea can be finding the height of the tree and then printing the nodes for each level
//But this code is not efficient

//The other idea is using the property of the queue i.e first in first out.

void print_level(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        q.pop();
        cout<<(curr->key)<<" ";
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

*/