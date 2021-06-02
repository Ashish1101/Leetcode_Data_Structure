class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        //first approach
        if(root == nullptr) return 1;
        queue<TreeNode *> q;
        vector<int> v;
        q.push(root);
        
        while(!q.empty()) {
            size_t size = q.size();
            int sum = 0;
            for(int i = 1; i <= size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                sum = sum + curr->val;
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
            v.push_back(sum);
        }
        
        int maxV = -100000;
        int index = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] > maxV) {
                maxV = v[i];
                index = i;
            }
        }
        return index + 1;
    }
};