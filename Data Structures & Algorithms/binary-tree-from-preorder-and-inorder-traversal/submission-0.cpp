/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
   public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0) return 0;
        TreeNode* root = new TreeNode();
        root->val = preorder[0];
        int i;
        vector<int> in1;
        vector<int> pre1;
        vector<int> in2;
        vector<int> pre2;

        for (i = 0; i < inorder.size(); ++i) {
            if (inorder[i] == root->val) break;
            in1.push_back(inorder[i]);
            pre1.push_back(preorder[i + 1]);
        }
        for (int j = i + 1; j < inorder.size(); ++j) {
            pre2.push_back(preorder[j]);
            in2.push_back(inorder[j]);
        }

        root->left = buildTree(pre1, in1);
        root->right = buildTree(pre2, in2);
        return root;
    }
};
