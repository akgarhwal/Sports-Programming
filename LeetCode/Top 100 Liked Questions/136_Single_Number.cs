/* Problem Link: https://leetcode.com/problems/single-number/ 

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/
public class Solution {
    public int SingleNumber(int[] nums) {
        int ans = 0;
        foreach(int num in nums){
            ans = ans ^ num;
        }
        return ans;
    }
}
