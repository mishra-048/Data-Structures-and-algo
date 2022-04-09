/*
// Printing the nodes at k level from the root

void print_dist(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << (root->key) << " ";
    }
    else
    {
        print_dist(root->left, k - 1);
        print_dist(root->right, k - 1);
    }
}
// Time complixity is O(n);
// Auxiliary space is O(h);

*/