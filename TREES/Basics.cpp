#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
 int data;
 Node* left;
 Node* right;

 Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
 }
};

Node* buildtree(Node* root){
   cout<<"Enter the data: "<<endl;
   int data;
   cin>>data;

   if(data == -1){
      return nullptr;
   }

   root = new Node(data);

   cout<<"Enter the data for inserting in the left of "<<data<<endl;
   root->left = buildtree(root->left);

   cout<<"Enter the data for inserting in the right of "<<data<<endl;
   root->right = buildtree(root->right);

   return root;
}

void levelorder(Node* root){
    if(root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void inorder(Node* root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = nullptr;

    root = buildtree(root);   // FIXED

    levelorder(root);         // FIXED

    cout<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}
