#include<bits/stdc++.h>
using namespace std;
#define s(x) scanf("%lld",&x)
typedef long long ll;
int main(){
    int tc;
    cin>>tc;
    while(tc--){

        ll n;
        s(n);
        int i=1,d = pow(5,i++);
        ll count=n/d;
        d = pow(5,i++);
        while(n/d){
            count+=(n/d);
            d=pow(5,i++);
        }
        printf("%lld\n",count);
    }
}
