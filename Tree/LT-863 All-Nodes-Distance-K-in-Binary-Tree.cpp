
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> v;
        if(root == nullptr || target == nullptr || k < 0) {
            return {};
        }
        nodesAtDistanceK(root , target , k , v);
        return v;
    }
    
    void distanceKUtil(TreeNode *target , int k , vector<int> &ans) {
        if(target == nullptr || k < 0) return;
        
        if(k == 0) {
            ans.push_back(target->val);
        }
        
        distanceKUtil(target->left , k-1 , ans);
        distanceKUtil(target->right , k-1 , ans);
    }
    
    int nodesAtDistanceK(TreeNode *root , TreeNode *target , int k , vector<int> &ans) {
        if(root == nullptr || target == nullptr || k < 0) {
            return -1;
        }
        
        if(root == target) {
            distanceKUtil(root , k , ans);
            return 0;
        }
        
        int dl = nodesAtDistanceK(root->left , target , k , ans);
        
        if(dl != -1) {
            if(dl + 1 == k) {
                ans.push_back(root->val);
            } else {
                distanceKUtil(root->right , k-dl-2 , ans);
            }
            return dl + 1;
        }
        
        int dr = nodesAtDistanceK(root->right , target , k , ans);
        
        if(dr != -1) {
            if(dr + 1 == k) {
                ans.push_back(root->val);
            } else {
                distanceKUtil(root->left , k-dr-2 , ans);
            }
            return dr + 1;
        }
        return -1;
    }
};