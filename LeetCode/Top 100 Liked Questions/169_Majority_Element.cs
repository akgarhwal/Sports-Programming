/* Problem Link: https://leetcode.com/problems/majority-element/

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.
*/

public class Solution {
    public int MajorityElement(int[] nums) {
        int ans = -1, count = 0;
        foreach(int num in nums){
            if(count == 0){
                ans = num;
            }
            if (ans == num){
                count += 1;
            }
            else{
                count -= 1;
            }
        }
        return ans;
    }
}
