/* Probelm Link: https://leetcode.com/problems/first-missing-positive/
Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
Note:

Your algorithm should run in O(n) time and uses constant extra space.
*/
public class Solution {
    public int FirstMissingPositive(int[] nums) {
        int lastIndex = 0;
        for(int ind = 0; ind < nums.Length; ind++){
            
            while(nums[ind] > 0 && nums[ind] < nums.Length && nums[ind] != ind+1) {
                int temp = nums[ind];
                int ind2 = nums[ind] - 1;
                nums[ind] = nums[ind2];
                nums[ind2] = temp;
                if(temp == nums[ind]){
                    break;
                }
            }
            while(lastIndex < nums.Length && (lastIndex+1) == nums[lastIndex]){
                lastIndex += 1;
            }
        }
        return lastIndex+1;
    }
}
