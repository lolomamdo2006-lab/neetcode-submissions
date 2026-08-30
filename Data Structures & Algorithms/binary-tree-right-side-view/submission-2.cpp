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
   vector <int> v;

   void dfs(TreeNode* root,int i){
     if(!root) return;
     if(i+1>v.size()){
        v.push_back(-200);
     }
     if(v[i]==-200){
        v[i]=root->val;
     }

    dfs(root->right,i+1);
    dfs(root->left,i+1);
   }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        return v;
    }
};
