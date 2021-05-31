class Solution {
public:
   TreeNode* construct(vector<int> &v, int left, int right){
        if(left > right) {
            return nullptr;
        }
       
        int maxE = INT_MIN;
        int index = 0;
        for(int i = left; i <= right; i++) {
            if(v[i] > maxE) {
                maxE = v[i];
                index = i;
            }
        }
        
        TreeNode* root = new TreeNode(maxE);
       
        root->left = construct(v , left , index - 1);
        root->right = construct(v , index + 1 , right);
       
        return root;
       
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 1)
            return new TreeNode(nums[0]);
        
        return construct(nums, 0, nums.size()-1);
    }
};