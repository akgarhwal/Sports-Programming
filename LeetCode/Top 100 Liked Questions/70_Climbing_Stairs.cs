/* Problem Link: https://leetcode.com/problems/climbing-stairs/

You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.
Example: 

Input 1: 2
Output 1: 2

Input 2: 4
Output 2: 5

*/
public class Solution {
    public int ClimbStairs(int n) {
        int res = 1, last = 1, second_last = 1;
        for(int step = 2; step <= n; step ++){
            res = last + second_last;
            second_last = last;
            last = res;
        }
        return res;
    }
}
