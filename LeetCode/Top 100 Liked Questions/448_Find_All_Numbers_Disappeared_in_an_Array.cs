/* Problem Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]

*/

// Solution 1 (with extra space)
public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        IList<int> res = new List<int>();
        int[] nums2 = new int[nums.Length];
        
        for(int index = 0; index < nums.Length; index++){
            nums2[nums[index]-1] = 1;
        }
        for(int index = 0; index < nums.Length; index++){
            if(nums2[index] != 1) {
                res.Add(index + 1);
            }
        }
        return res;
    }
}


// Solution 2 (without extra space)
public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        IList<int> res = new List<int>();
        int length = nums.Length,  indexToUpdate = -1;
        
        // First make elements negative if associated index is an element in the array
        for(int index = 0; index < length; index++){
            indexToUpdate = nums[index] < 0 ? -(nums[index]) - 1 : nums[index] - 1;
            nums[indexToUpdate] = nums[indexToUpdate] > 0 ? -nums[indexToUpdate] : nums[indexToUpdate];
        }
        for(int index = 0; index < length; index++){
            if(nums[index] > 0) {
                res.Add(index + 1);
            }
        }
        return res;
    }
}
