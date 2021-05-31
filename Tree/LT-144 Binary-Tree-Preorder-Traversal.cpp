class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        
        vector<int> v;
        stack<TreeNode *>s;
        s.push(root);
        while(!s.empty()) {
            TreeNode *curr = s.top();
            s.pop();
            v.push_back(curr->val);
            
            if(curr->right != nullptr) s.push(curr->right);
            if(curr->left != nullptr) s.push(curr->left);
        }
        return v;
    }
};