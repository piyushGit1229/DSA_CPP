#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *insertBST(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (root->data > val)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node *buildBST(vector<int> &arr)
{
    Node *root = nullptr;
    for (int val : arr)
    {
        root = insertBST(root, val);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node* root,int val){
    if(root == nullptr){
        return false;
    }
    if(root->data == val){
        return true;
    }
    if(val < root->data){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node *root = buildBST(arr);
    inorder(root);
    cout<<endl;
    cout<<search(root,5);
    return 0;
}