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
    bool count (TreeNode* root, int targetSum , int currentSum){

        if(root == nullptr ) return false;

        if(currentSum + root->val == targetSum && root->left == nullptr && root->right == nullptr){ 
            return true; 
        }

        if(count(root->left ,targetSum,currentSum + root->val)) 
            return true;

        if(count(root->right ,targetSum,currentSum + root->val)) 
            return true;

        return false;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return count(root,targetSum,0);
    }
};
