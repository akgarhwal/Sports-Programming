/* Problem Link: https://leetcode.com/problems/house-robber/

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.

*/


// Solution 1
public class Solution {
    public int Rob(int[] nums) {
        int length = nums.Length;
        int[,] res = new int[2, length];
        
        for(int index = 0; index < length; index++){
            if(index == 0){
                res[0,index] = 0;
                res[1,index] = nums[index];                
            }
            else{
                // Skip House - index
                res[0,index] = Math.Max(res[0,index-1], res[1,index-1]);
                // Rob House - index
                res[1,index] = res[0,index-1] + nums[index];
            }
        }
        return length == 0 ? 0 : Math.Max(res[0, length-1], res[1, length-1]);
    }
}


// Solution 2
public class Solution {
    public int Rob(int[] nums) {
        int length = nums.Length;
        int[] res = new int[length];
        
        for(int index = 0; index < length; index++){
            if(index == 0){
                res[index] = nums[index];
            }
            else if (index == 1){
                res[index] = Math.Max(nums[index-1], nums[index]);
            }
            else{
                res[index] = Math.Max(res[index-1], res[index-2] + nums[index]);
            }
        }
        return length == 0 ? 0 : res[length-1];
    }
}
