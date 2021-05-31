class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> v;
        //do level order traversal by using queue
        queue<TreeNode *> q;
        q.push(root);
        
        while(q.empty() == false) {
            int size = q.size(); 
            vector<int> temp;
            for(int i = 0; i < size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
           v.push_back(temp);
        }
        return v;
    }
};