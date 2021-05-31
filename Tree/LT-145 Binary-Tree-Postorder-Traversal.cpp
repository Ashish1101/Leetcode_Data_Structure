class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorderUtil(root , v);
        return v;
        
        
    }
    
    void postorderUtil(TreeNode *root , vector<int> &ans) {
        if(root == nullptr) return;
        
        postorderUtil(root->left , ans);
        postorderUtil(root->right , ans);
        ans.push_back(root->val);
    }
};