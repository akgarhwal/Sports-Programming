#include<bits/stdc++.h>
using namespace std;
int n=0;
int fun(int x){
    int d=0;
    int res=0;
    while(x){
        d=x%10;
        res+=(pow(d,n));
        x=x/10;
    }
    return res;
}
int main(){
  cin>>n;
  long long ans=0;
  for(int i=10;i<=1000000;i++){
      if(fun(i)==i)
        ans+=i;
  }
  cout<<ans;
  return 0;
}