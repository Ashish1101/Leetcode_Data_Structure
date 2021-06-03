class Solution {
public:
    
    //the idea to solve this problem is to subtract curr->node value from target sum
    // and then check for if the current sum and root value is equal or not
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        
        //check if target sum and root value equal or not
        if(targetSum == root->val && root->left == nullptr && root->right == nullptr) {
            return true;
        }
        
        
        return hasPathSum(root->left , targetSum - root->val) || hasPathSum(root->right , targetSum - root->val);
    }
};