/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root == nullptr) return 0;
    int leftht = heightOfBinaryTree(root->left);
    int rightht = heightOfBinaryTree(root -> right);
    return max(leftht,rightht) + 1;
}
