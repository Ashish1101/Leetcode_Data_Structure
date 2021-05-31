class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        return createTree(root , sum);
    }
    
    TreeNode* createTree(TreeNode *root , int &sum) {
        if(root == nullptr) return nullptr;
        
        createTree(root->right , sum);
       
        
        sum = sum + root->val;
        
        root->val = sum;
        
        createTree(root->left , sum);
        
        return root;
    }
};