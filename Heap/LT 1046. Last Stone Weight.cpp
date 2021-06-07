class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //create a max binary heap
        priority_queue<int> pq(stones.begin() , stones.end());
       
        if(pq.size() == 1) {
            return pq.top();
        }
        
        while(!pq.empty()) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x != y) {
                pq.push(abs(x - y));
            }
            if(pq.size() == 1) break;
        }
        return pq.size() == 0 ? 0 : pq.top();
    }
    //Time O(nlogn)
};