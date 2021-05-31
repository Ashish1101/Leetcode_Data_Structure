class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        stack<TreeNode *> s;
        TreeNode *curr = root;
        vector<int> v;
        while(curr != nullptr || !s.empty()) {
            while(curr != nullptr) {
                s.push(curr);
                curr = curr->left;
            }
            
            curr = s.top();
            s.pop();
            
            v.push_back(curr->val);
            
            curr = curr->right;
        }
        return v;
    }
};