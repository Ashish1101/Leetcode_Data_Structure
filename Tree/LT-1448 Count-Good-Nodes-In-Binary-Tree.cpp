
class Solution {
public:
    int count = 0;
    int goodNodes(TreeNode* root) {
        //base case
        countNodes(root , -10000);
        return count;
        
    }
    
    //node that can have a minimum value is -10000;
    //if current node value is smaller than previous value
    //then we update the current value with previos value
    //else update the count
    
    void countNodes(TreeNode* root , int preValue) {
        if(root == nullptr) return;
        
        int val = root->val;
        
        if(val >= preValue) {
            count++;
        } else {
            val = preValue;
        }
        
        countNodes(root->left , val);
        countNodes(root->right , val);
    }
};