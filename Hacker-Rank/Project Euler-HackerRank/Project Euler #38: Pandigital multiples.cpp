#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;

bool check(llt n,llt k){
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    llt x=1,f=0,v=0;
    for(int x=1;v!=1;x++){
        llt z=n*x;
        while(z){
            if(z%10==0 or z%10 > k){
                return false;
            }
           a[z%10]++;
            //cout<<z%10<<"  ";
            z/=10;
        }
        for(int i=1;i<=k;i++){
            if(a[i]==1){
                v=1;
            }
            else if(a[i]>=2){
                return false;
            }
            else{
                f=1;
            }
        }
        if(f==1){
            v=0;
            f=0;
        }
        
    }
    return true;
}
int main(){

    llt n,k;
    cin>>n>>k;
    for(llt i=2;i<n;i++){
        if(check(i,k))
            cout<<i<<"\n";
    }
  return 0;
}
