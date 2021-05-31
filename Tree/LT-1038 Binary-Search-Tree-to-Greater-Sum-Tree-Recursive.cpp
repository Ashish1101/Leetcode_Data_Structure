class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
         int sum = 0;
             return createTree(root , sum);
         
       
    }
      //Recursive
    
    
    TreeNode *createTree(TreeNode *root , int &sum) {
        if(root == nullptr) return nullptr;
        
        createTree(root->right , sum);
        
        //make sum as previous sum + root->val
        sum = sum + root->val;
        
        //now make root->val = sum;
        
        root->val = sum;
        
        //call from left subtree
        
        createTree(root->left , sum);
        
        return root;
    }
};