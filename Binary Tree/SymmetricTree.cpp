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
    bool checkSymmetric(TreeNode *left, TreeNode *right) {
        if (left == NULL || right == NULL) {
            return left == right;
        }
        if (left->val != right->val) {
            return false;
        }
        bool leftOne = checkSymmetric(left->left, right->right);
        bool rightOne = checkSymmetric(left->right, right->left);
        return leftOne && rightOne;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return checkSymmetric(root->left, root->right);
    }
};
