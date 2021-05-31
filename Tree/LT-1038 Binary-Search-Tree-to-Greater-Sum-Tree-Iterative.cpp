class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
         
        //ITERATIVE SOLUTION
        
        int sum = 0;
        stack<TreeNode *> s;
        TreeNode *curr = root;
        while(!s.empty() || curr != nullptr) {
            while(curr != nullptr) {
                s.push(curr);
                curr = curr->right;
            }
            
            //at this point the stack will curr->right will be empty
            curr = s.top();
            s.pop();
            curr->val = sum + curr->val;
            sum = curr->val;
            curr = curr->left;
        }
        
        return root;
    }
};