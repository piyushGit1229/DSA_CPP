#include <bits/stdc++.h>
using namespace std;

/* -------- TREE NODE -------- */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

/* =================================================
   BUILD TREE FROM LEVEL ORDER INPUT (WITH "null")
   ================================================= */
TreeNode* buildTree(vector<string>& arr) {
    // agar input empty ya root null hai
    if (arr.size() == 0 || arr[0] == "null")
        return NULL;

    // root banao
    TreeNode* root = new TreeNode(stoi(arr[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    // level order traversal se tree build
    while (!q.empty() && i < arr.size()) {
        TreeNode* curr = q.front();
        q.pop();

        // LEFT CHILD
        if (i < arr.size() && arr[i] != "null") {
            curr->left = new TreeNode(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;

        // RIGHT CHILD
        if (i < arr.size() && arr[i] != "null") {
            curr->right = new TreeNode(stoi(arr[i]));
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

/* =================================================
   SERIALIZE : TREE -> STRING (LEVEL ORDER)
   ================================================= */
string serialize(TreeNode* root) {
    if (root == NULL)
        return "";

    string result = "";
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr == NULL) {
            result += "null ";
            continue;
        }

        result += to_string(curr->val) + " ";
        q.push(curr->left);
        q.push(curr->right);
    }

    return result;
}

/* =================================================
   DESERIALIZE : STRING -> TREE
   ================================================= */
TreeNode* deserialize(string data) {
    if (data.size() == 0)
        return NULL;

    // string ko tokens me todna
    stringstream ss(data);
    vector<string> tokens;
    string temp;

    while (ss >> temp) {
        tokens.push_back(temp);
    }

    // root banao
    TreeNode* root = new TreeNode(stoi(tokens[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < tokens.size()) {
        TreeNode* curr = q.front();
        q.pop();

        // LEFT CHILD
        if (tokens[i] != "null") {
            curr->left = new TreeNode(stoi(tokens[i]));
            q.push(curr->left);
        }
        i++;

        // RIGHT CHILD
        if (i < tokens.size() && tokens[i] != "null") {
            curr->right = new TreeNode(stoi(tokens[i]));
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

/* -------- INORDER (VERIFY TREE) -------- */
void inorder(TreeNode* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

/* ---------------- MAIN ---------------- */
int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: build tree from input
    TreeNode* root = buildTree(arr);

    // Step 2: serialize tree
    string data = serialize(root);
    cout << "Serialized:\n" << data << endl;

    // Step 3: deserialize back
    TreeNode* newRoot = deserialize(data);

    // Step 4: verify by inorder traversal
    cout << "Inorder after deserialization:\n";
    inorder(newRoot);

    return 0;
}
