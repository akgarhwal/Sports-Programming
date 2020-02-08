/* Problem Link:https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/

Given a non-negative integer num, return the number of steps to reduce it to zero. 
If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

public class Solution {
    public int NumberOfSteps (int num) {
        int ans = 0;
        while (num > 0) {
            ans += (num&1) == 0 || num == 1 ? 1 : 2;
            num = num >> 1;
        }
        return ans;
    }
}
