class Solution {
public:
    // int sum = 0;
    int sumEvenGrandparent(TreeNode* root) {
        return getSum(root , nullptr , nullptr);
    }
    
    int getSum(TreeNode* child , TreeNode* parent , TreeNode *grandParent) {
         int sum=0;
    if(child==nullptr) return 0;
    if(grandParent!=nullptr && grandParent->val % 2 == 0){
         sum+=child->val;
    }
    sum+= getSum(child->left,child,parent);
    sum+=getSum(child->right,child,parent);
    return sum;
    }
};