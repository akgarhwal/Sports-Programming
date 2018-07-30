// Link : https://leetcode.com/problems/lexicographical-numbers/description/
class Solution {
public:
    void func(int x,int &n, vector<int> &v){
        if (x > n) {
            return ;
        }
        v.push_back(x);
        x *= 10;
        for(int i=0;i<=9;i++){
            func(x+i,n,v);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=9;i++){
            func(i,n,res);
        }
        return res;
    }
};
