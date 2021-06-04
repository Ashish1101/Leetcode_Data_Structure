#include "TreeNode Class.h"

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(subRoot == nullptr) return true;
        
        if(root == nullptr) return false;
        
        if(isIdentical(root , subRoot)) return true;
        
        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot);
        
        
    }
    
    bool isIdentical(TreeNode *root , TreeNode *sub) {
        if(root == nullptr && sub == nullptr) return true;
        
        if(root == nullptr || sub == nullptr) return false;
        
        return (root->val == sub->val && isIdentical(root->left , sub->left) && isIdentical(root->right , sub->right));
    }
    
    
    //Time Complexity O(mn) where m and n are nodes in trees
    
};