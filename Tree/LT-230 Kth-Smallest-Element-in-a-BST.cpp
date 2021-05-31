class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr) return 0;
        
        stack<TreeNode *> s;
        while(root != nullptr || !s.empty()) {
            //go to the left side till root become null
            while(root != nullptr) {
                s.push(root);
                root = root->left;
            }
            
            //till this point we have finished the left subtree
            root = s.top();
            s.pop();
            if(--k == 0) break;
            root = root->right;
        }
        return root->val;
    }
};