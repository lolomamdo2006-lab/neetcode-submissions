class Solution {
public:

    int min(TreeNode* root) {
        if (!root->left)
            return root->val;

        return min(root->left);
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        // لو وصلنا لنهاية الشجرة
        if (!root)
            return nullptr;


        // ندور على الـ key
        if (key < root->val) {

            root->left = deleteNode(root->left, key);

        }
        else if (key > root->val) {

            root->right = deleteNode(root->right, key);

        }


        // لقينا الـ key
        else {

            // Case 1: مفيش children
            if (!root->left && !root->right) {

                delete root;
                return nullptr;
            }


            // Case 2: فيه left بس
            else if (root->left && !root->right) {

                TreeNode* temp = root->left;
                delete root;

                return temp;
            }


            // Case 3: فيه right بس
            else if (!root->left && root->right) {

                TreeNode* temp = root->right;
                delete root;

                return temp;
            }


            // Case 4: فيه left و right
            else {

                int mini = min(root->right);

                root->val = mini;

                root->right = deleteNode(root->right, mini);
            }
        }

        return root;
    }
};