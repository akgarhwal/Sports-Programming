/*
Given an array nums of n integers where n > 1,  
return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        
        int mul = nums[0];
        for(int i = 1; i < nums.size(); i++){
            ans[i] = mul;
            mul *= nums[i];
        }
        mul = nums[nums.size()-1];
        for(int i = nums.size()-2; i >= 0; i--){
            ans[i] = ans[i] * mul;
            mul *= nums[i];
        }
        
        return ans;
    }
};
