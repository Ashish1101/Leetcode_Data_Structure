class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        findSol(root, v);
        
        sort(v.begin() , v.end());
        
        int res = -1;
        
        for(int i = 1; i < v.size(); i++) {
            if(v[i] != v[i-1]) {
             res = v[i];
                break;
            }
        }
        return res;
    }
    
    //do inorder traversal and push all node->val in array 
    //sort the array find second minimum
    
    void findSol(TreeNode *root , vector<int> &v) {
        if(root == nullptr) return;
        
        findSol(root->left, v);
        
        v.push_back(root->val);
        
        findSol(root->right , v);
    }
    
    
};