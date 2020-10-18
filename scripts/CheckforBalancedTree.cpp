#include<bits/stdc++.h>
int height(Node *r)
{
    if(r==NULL)
    return 0;
    
    int l=height(r->left);
    int n=height(r->right);
    
    return 1+max(l,n);
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if (root==NULL)
    return 1;
    
    int l=height(root->left);
    int r=height(root->right);
    
    if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
    return 1;
    return 0;
}