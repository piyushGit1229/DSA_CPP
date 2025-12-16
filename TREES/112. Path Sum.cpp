#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

TreeNode* buildtree(vector<int>& arr){
     
}

bool hasPathSum(TreeNode* root , int target){

}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
TreeNode* root = buildtree(arr);
int target;
cin>>target;
hasPathSum(root,target);
if(hasPathSum){
    cout<<"Yes";
}
else{
    cout<<"False";
}
return 0;
}