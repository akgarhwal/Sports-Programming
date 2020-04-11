/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int result = INT_MIN, curr_sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            curr_sum += nums[i];
            
            result = max(result, curr_sum);
            
            curr_sum = curr_sum < 0 ? 0 : curr_sum;            
            
        }
        return result;
    }
};
