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
    void check(TreeNode* root, int targetSum ,int currentSum ,vector<vector<int>>&ans,vector<int>& path ){

        if(root == nullptr) return;
        currentSum += root->val;
        path.push_back(root->val);
        
        if(currentSum == targetSum && root->left == nullptr && root->right == nullptr) {

            ans.push_back(path);
            path.pop_back();
            
            return ;
        }
        
        if(root->left != nullptr){

            check(root->left,targetSum,currentSum,ans,path);

        }
        
        if(root->right != nullptr){
        
            check(root->right,targetSum,currentSum,ans,path);

        }

        path.pop_back();
        

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans ;
        vector<int> path;

        check(root,targetSum,0,ans,path);

        return ans;
    }
};
