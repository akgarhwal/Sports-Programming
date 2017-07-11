#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
typedef struct {
    ll a,b,c,d;
}matrix;
matrix mul(matrix x,matrix y){
    matrix ans = {(x.a*y.a+x.b*y.c)%mod,(x.a*y.b+x.b*y.d)%mod,(x.c*y.a+x.d*y.c)%mod,(x.c*y.b+x.d*y.d)%mod};
    return ans;
}
matrix power(matrix x,int y){
    matrix res={1,1,1,0};
    while(y){
    if(y%2)
        res=mul(res,x);
    x=mul(x,x);
    y=y/2;
    }
    return res;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        matrix y={1,1,1,0};
        matrix res1={1,1,1,0};
        matrix res2={1,1,1,0};
        if(n-1>0)
         res1 = power(y,n-1);
         if(m>0)
         res2 = power(y,m);

        long long sum1 = (res1.a)%mod;

        long long sum2 = (res2.a)%mod;

        if(n<=1){
            sum1=1;
        }
        if(m==0)
            sum2=0;
        if(n==0 and m==0){
            cout<<0<<endl;
            continue;
        }

        cout<<(sum2-sum1+mod)%mod<<endl;

    }
}
