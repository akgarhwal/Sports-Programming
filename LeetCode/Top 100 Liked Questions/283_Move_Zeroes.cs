/* Problem Link: https://leetcode.com/problems/move-zeroes/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:
  1. You must do this in-place without making a copy of the array.
  2. Minimize the total number of operations.

*/

// Solution 1
public class Solution {
    public void MoveZeroes(int[] nums) {
        int first = 0;
        for(int i = 0; i< nums.Length; i++){
            if (nums[i] != 0){
                nums[first++] = nums[i];
            }
        }
        while(first < nums.Length){
            nums[first++] = 0;
        }
    }
}



// Solution 2

public class Solution {
    public void MoveZeroes(int[] nums) {
        int nonZeroCounter = 0;
        for(int index = 0; index < nums.Length; index++){
            if(nums[index] != 0){
                Swap(ref nums[nonZeroCounter++], ref nums[index]);
            }
        }
    }
    private void Swap(ref int first, ref int second){
        int temp = first;
        first = second;
        second = temp;
    }
}
