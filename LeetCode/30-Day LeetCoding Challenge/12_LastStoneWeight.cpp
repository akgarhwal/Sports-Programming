/*
We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)
*/

// Solution 1
// Implement with sorting
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            int n = stones.size();
            int y = stones[n-1];
            int x = stones[n-2];
            stones.pop_back();
            stones.pop_back();
            
            if(x != y){
                stones.push_back(y-x);
            }
        }
        return stones.size() == 0 ? 0 : stones[0];
    }
};


// Solution 2
// Implement using Heap
// TODO
