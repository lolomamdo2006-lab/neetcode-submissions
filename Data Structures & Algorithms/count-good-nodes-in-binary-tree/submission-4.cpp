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
    vector<int> v;
    int sum = 0;
    int goodNodes(TreeNode* root) {
        bool g = 1;
        if (!root) return 0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] > root->val) {
                g = 0;
                break;
            }
        }

        if (g) sum++;

        v.push_back(root->val);
        goodNodes(root->left);

        goodNodes(root->right);

        v.pop_back();

        return sum;
        return sum;
    }
};
