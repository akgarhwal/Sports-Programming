#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> memo(1000000,0);
ll fun(ll n){
    if(n<=11){
        return n;
    }
    ll a,b,c;
    if(n/2<1000000 and memo[n/2]!=0){
        a =  memo[n/2];
    }
    else{
        a= max(n/2,fun(n/2));
    }
    if(n/3<1000000 and memo[n/3]!=0){
        b= memo[n/3];
    }
    else{
        b = max(n/3,fun(n/3));
    }
    if(n/4<1000000 and memo[n/4]!=0){
        c = memo[n/4];
    }
    else
        c = max(n/4,fun(n/4));
    if(n<1000000){
        memo[n]=max(n,a+b+c);
    }
    return max(n,a+b+c);
}
int main(){
        int n;
        while(cin>>n){
            cout<<fun(n)<<endl;
        }
    return 0;
}
