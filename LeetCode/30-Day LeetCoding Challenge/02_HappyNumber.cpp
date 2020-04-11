/*
Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.
*/


class Solution {
public:
    
    int sumOfSqureDigit(int num){
        int res = 0;
         while(num > 0){
            res += (num%10) * (num%10); 
            num  = num / 10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        
        unordered_set<int> mset;
        int num = n;
        while(num != 1){
            
            int new_num = sumOfSqureDigit(num);
        
            if(mset.count(new_num) > 0){
                return false;
            }
            mset.insert(new_num);
            num = new_num;
        }
        return true;
    }
};
