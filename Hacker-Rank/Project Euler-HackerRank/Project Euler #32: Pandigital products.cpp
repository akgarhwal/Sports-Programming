#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
bool check(int p,int i,int j,int n){
    int a[n+1]={0};
    while(p){
        if(p%10>n)  return false;
        a[p%10]++;
        p/=10;
    }
    while(i){
        if(i%10>n)  return false;
        a[i%10]++;
        i/=10;
    }
    while(j){
        if(j%10>n)  return false;
        a[j%10]++;
        j/=10;
    }
    if(a[0]!=0) return false;
    for(int i=1;i<=n;i++){
        if(a[i]!=1)
            return false;
    }
    return true;
}
int main(){
  int n;
  cin>>n;
  llt sum=0;
    set<int> se;
  for(int i=2;i<=99;i++){
      for(int j=i+1;j<=99999;j++){
          int p = i*j;
          if(check(p,i,j,n)){
            if(se.count(p)==0){
              sum+=p;
                se.insert(p);
            }
              //cout<<i<<" \t"<<j<<"\t"<<p<<endl;
          }
      }
  }
  cout<<sum<<endl;
  return 0;
}