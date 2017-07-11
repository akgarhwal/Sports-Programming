#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fact(int n){
    return n==0?1:(n*fact(n-1));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=10,num;
    cin>>num;
    long long ans=0;
    while(n<num){
        int x=n;
        long long sum=0;
        while(x>0){
            sum = sum +fact(x%10);
            x=x/10;
        }
        if(sum%n==0)
            ans += n;
        n++;
    }
    cout<<ans;
    return 0;
}