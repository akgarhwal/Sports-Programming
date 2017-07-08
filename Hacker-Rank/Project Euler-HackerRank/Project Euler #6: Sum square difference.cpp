#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        long long int sum1=0,sum2=0;
        for(int i=1;i<=n;i++){
            sum1 += i;
            sum2 += (i*i);
        }
        sum1 = sum1*sum1;
        cout<<sum1-sum2<<endl;
    }
    return 0;
}