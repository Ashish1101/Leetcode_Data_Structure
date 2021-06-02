class Solution {
public:
    
    int deepestLeavesSum(TreeNode* root) {
        
        //do a levelorder traversal
        
        //for each level update the sum with curr_sum
        if(root == nullptr) return 1;
        int sum = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()) {
            size_t size = q.size();
            int curr_sum = 0;
            for(int i = 0; i < size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                curr_sum += curr->val;
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
            //here update the sum for each level 
            //new one will be the result as that was the last level
            sum = curr_sum;
        }
        return sum;
    }
};