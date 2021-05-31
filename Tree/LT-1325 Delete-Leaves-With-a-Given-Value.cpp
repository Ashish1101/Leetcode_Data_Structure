class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == nullptr) return nullptr;
        
        //do post order traversal
        //if current node value == target and if it is 
        //a leaf node the return null and connected that null with root->left or root->right
        
        root->left = removeLeafNodes(root->left , target);
        root->right = removeLeafNodes(root->right, target);
        
        if(root->val == target && (root->left == nullptr && root->right == nullptr)) {
            return nullptr;
        }
       
        
        return root;
    }
};