class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        Tree(root , v);
        int j = v.size() - 1;
        int i = 0;
        //do two pointer approach
        while(i < j) {
            if(v[i] + v[j] == k) {
                return true;
            }
            
            if(v[i] + v[j] > k) {
                j--;
            } 
            
            if(v[i] + v[j] < k) {
                i++;
            }
         }
        return false;
    }
    
    
    void Tree(TreeNode* root , vector<int> &v) {
        if(root == nullptr) return;
        
        //do inorder traversal
        Tree(root->left , v);
        
         //logic push all elements in inorder (sorted order)
        v.push_back(root->val);
        
        
        Tree(root->right , v);
    }
    
};

//another approach can be 
//we store every node data in an unordered_set and then for every 
//node check if set.find(sum - root->value) != s.end() then return true else
//else push that node set