class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode *> q;
        q.push(root);
        int count = 0;
        while(!q.empty()) {
            int size = q.size();
            count++;
            for(int i = 0; i < size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
        }
        return count;
    }
};