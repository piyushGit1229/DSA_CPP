#include <bits/stdc++.h>
using namespace std;

/* ---------- Tree Node Structure ---------- */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

/* ---------- Build Tree from Level Order ---------- */
/* Use -1 as NULL */
TreeNode* buildTree(vector<int>& arr) {
    if (arr.size() == 0 || arr[0] == -1)
        return nullptr;

    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        TreeNode* cur = q.front();
        q.pop();

        if (i < arr.size() && arr[i] != -1) {
            cur->left = new TreeNode(arr[i]);
            q.push(cur->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1) {
            cur->right = new TreeNode(arr[i]);
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

/* ---------- Find Node by Value ---------- */
TreeNode* findNode(TreeNode* root, int x) {
    if (root == nullptr) return nullptr;
    if (root->val == x) return root;

    TreeNode* left = findNode(root->left, x);
    if (left) return left;

    return findNode(root->right, x);
}

/* ---------- Lowest Common Ancestor ---------- */
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr) return nullptr;

    if (root == p || root == q)
        return root;

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right)
        return root;

    return left ? left : right;
}

/* ---------- MAIN ---------- */
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // use -1 for NULL
    }

    int pVal, qVal;
    cin >> pVal >> qVal;

    TreeNode* root = buildTree(arr);

    TreeNode* p = findNode(root, pVal);
    TreeNode* q = findNode(root, qVal);

    TreeNode* ans = lowestCommonAncestor(root, p, q);

    if (ans)
        cout << ans->val;
    else
        cout << -1;

    return 0;
}
