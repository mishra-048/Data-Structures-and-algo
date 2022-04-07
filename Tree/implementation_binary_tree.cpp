#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(40);

    return 0;
}

/*
//We are creating an empty tree
int main()
{
    Node *root =NULL;

}*/