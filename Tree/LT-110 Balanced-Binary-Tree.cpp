class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        
        return height(root);
    }
    
    int height(TreeNode * root) {
        if(root == nullptr) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        int check =  abs(rh - lh);
        
        if(check > 1 || check) return -1;
        
        return 1 + max(lh , rh);
    }
};