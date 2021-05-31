
class Solution {

public:
    TreeNode *prev = nullptr , *first = nullptr , *second = nullptr;
    void recoverTree(TreeNode* root) {
        correctTree(root , first , second);
        swap(first->val , second->val);
    }
    
    void correctTree(TreeNode *root , TreeNode* &first , TreeNode* &second) {
        //base condition
        if(root == nullptr) return;
        
        //now do a inorder traversal 
        correctTree(root->left , first , second);
        
        //now check if prev node data is greater than current node or
        //not if yes than mark those node
        
        //first node will be the prev && second node will be the root
        if(prev != nullptr && root->val < prev->val) {
            if(first == nullptr) {
                first = prev;
            }
            second = root;
        }
        
        prev = root;
        
        correctTree(root->right, first , second);
    }
};