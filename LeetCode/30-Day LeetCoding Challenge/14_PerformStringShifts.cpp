/*
You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:

direction can be 0 (for left shift) or 1 (for right shift). 
amount is the amount by which string s is to be shifted.
A left shift by 1 means remove the first character of s and append it to the end.
Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.
Return the final string after all operations.
*/

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.size();
        int index = 0;
        for(auto row : shift){
            if(row[0] == 1){
                // right shift
                index = (index - row[1] + n) % n;
            }
            else{
                // left shift
                index = (index + row[1]) % n;
            }
        }
        string res = s + s;
        return res.substr(index, n);
    }
};
