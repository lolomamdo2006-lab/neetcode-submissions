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
vector<vector<int>> v;
    void fun(TreeNode* root,int depth){
       if(!root) return;
       if (v.size() <= depth)
         v.push_back({});
         v[depth].push_back(root->val);
        fun(root->left,depth+1);
        fun(root->right,depth+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        fun(root,0);
        return v;
    }
};
