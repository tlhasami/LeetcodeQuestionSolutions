class Solution {
public:
    bool inorder(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;

        if (p == nullptr || q == nullptr) return false;

        if (p->val != q->val) return false;

        return inorder(p->left, q->left) && inorder(p->right, q->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return inorder(p, q);
    }
};
