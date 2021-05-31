class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
           /*  ITERATIVE SOLUTION  */
           
        //check for empty tree
        if(root == nullptr) return new TreeNode(val);
        
        TreeNode *curr = root , *prev = nullptr;
        
        //make a prev node to keep track the previous node
        
        while(curr != nullptr) {
            prev = curr;
            curr = curr->val > val ? curr->left : curr->right;
        }
        
        if(prev->val > val) {
            prev->left = new TreeNode(val);
        } else {
            prev->right = new TreeNode(val);
        }
        
        return root;
    }
};