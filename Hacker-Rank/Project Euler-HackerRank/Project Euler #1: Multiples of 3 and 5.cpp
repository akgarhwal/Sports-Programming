#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */   
    long long tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        n=n-1;
        long long l3 = (n/3)*3;
        long long l5 = (n/5)*5;
        long long l15 = (n/15)*15;
        long long a3=3,a5=5,a15=15;
        long long t3 = ((l3-a3)/3) +1;
        long long t5 = ((l5-a5)/5) +1;
        long long t15 = ((l15-a15)/15) +1;
        long long sum = ((a3+l3)*t3)/2;
        sum = sum + ((a5+l5)*t5)/2;
        long long sum1 = ((a15+l15)*t15)/2;
        if(n>=15)
              sum = sum-sum1;
        cout<<sum<<endl;
    }
    return 0;
}