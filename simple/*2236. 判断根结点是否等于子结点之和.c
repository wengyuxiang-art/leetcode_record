/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 //注意==、return
bool checkTree(struct TreeNode* root) {
    return root->val == root->left->val + root->right->val;
}