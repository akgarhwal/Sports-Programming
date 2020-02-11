/* Problem Link: https://leetcode.com/problems/two-sum/

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int[] result = new int[2];
        for(int index = 0; index < nums.Length; index++){
            int previous = target - nums[index];
            if(dict.ContainsKey(previous)){
                result[0] = dict[previous];
                result[1] = index;
                break;
            }
            dict[nums[index]] = index;
        }
        return result;
    }
}
