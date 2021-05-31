class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        //so the tree is a perfect binary tree
        //if level represent nodes then height from root
        //height = log2(level)+1
        
        //while height > 0
        //make level to its new node
        
        int height = log2(label)+1;
        vector<int> v;
        while(height > 0) {
            v.insert(v.begin() , label);
            
            //right most node value of that level would be
            int rightMostVal = (1 << height)-1;
            int leftMostVal = 1 << (height - 1);
            label = (rightMostVal + leftMostVal - label) / 2;
            height--;
        }
        return v;
    }
};