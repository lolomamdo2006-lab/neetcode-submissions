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
   void insert(TreeNode*&root, int val){
       if(!root){
        TreeNode*n=new TreeNode(val);
        root=n;
       }
             if(val<root->val) {
            if(!root->left){
                TreeNode*n=new TreeNode(val);
                root->left=n;
                
            }
            else{
         insertIntoBST(root->left,val);                
            }
        }
     else if(val>root->val) {
            if(!root->right){
                TreeNode*n=new TreeNode(val);
                root->right=n;
            }
            else{
       insertIntoBST(root->right,val);                
            }
        }
   }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root,val);
        return root;


    }
};