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
        long n,i=2,ans=2;
        cin>>n;
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                ans=i;
                n=n/i;
            }
        }
        if(n>ans)
            ans=n;
        cout<<ans<<endl;
    }
    return 0;
}