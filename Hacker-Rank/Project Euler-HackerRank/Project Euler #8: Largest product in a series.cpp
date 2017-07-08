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
        int len,k;
        cin>>len>>k;
        string s;
        cin>>s;
        int x=k;
        long long p = 1;
        for(int i=0;i<k;i++){
            p=p*(s[i]-48);
        }
        long long maxp=p;
        for(int i=k;i<len;i++){
            if((s[i-k]-48)!=0)
                p=p/(s[i-k]-48);
            p=p*(s[i]-48);
            if(p==0){
                p=1;
                x=k;
                int y=i;
                while(x--){
                    p=p*(s[y--]-48);
                }
            }
            
            maxp = maxp>p?maxp:p;
        }
        cout<<maxp<<endl;
    }
    return 0;
}
