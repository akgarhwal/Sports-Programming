#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000000
#define MAXN 10000000
int phi[MAXN + 1], prime[MAXN/10], sz=0;
vector<bool> mark(MAXN + 1);
long long int primeFactorize(int n){
    long long int yy=1;
    for( ; n > 1 ; ){
        int p = prime[n] , e = 0 ;
        for( ; n % p == 0 ; n /= p , e++ ) ;  
        yy*= ((p-1)*(pow((double)p,e-1)));
    }
    return yy;
}



bool check(int n,int pn){
    int a[10]={0};
    while(pn){
        a[pn%10]++;
        pn=pn/10;
    }
    while(n){
        a[n%10]--;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(a[i]!=0)
            return false;
    }
    return true;
}
int main(){
    phi[1] = 1; 
   for (int i = 2; i <= MAXN; i++ ){
    if(!mark[i]){
        phi[i] = i-1;
        prime[sz++]= i;
    }
    for (int j=0; j<sz && prime[j]*i <= MAXN; j++ ){
        mark[prime[j]*i]=1;
        if(i%prime[j]==0){
            int ll = 0;int xx = i;
            while(xx%prime[j]==0)
            {
                           xx/=prime[j];
                           ll++;         
                       }
            int mm = 1;
            for(int k=0;k<ll;k++)mm*=prime[j];
            phi[i*prime[j]] = phi[xx]*mm*(prime[j]-1);
            break;
    }
        else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
    }
}
    int n;
    cin>>n;
    int ans=0;
    float mi=1e9f;
    int temp=0;
    for(int i=2;i<n;i++){
        temp=phi[i];
        if(check(i,temp)){
            if(((float)i/temp)<mi){
                mi= ((float)i/temp);
                ans=i;
            
            }
        }

    }
    cout<<ans<<endl;
}
