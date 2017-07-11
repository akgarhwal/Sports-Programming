#include<bits/stdc++.h>
using namespace std;
vector<long long int> v;

void compute(){
    v.push_back(1);
    v.push_back(1);
    long long int x=1,t=x;
    unsigned long long int temp=1e18;
    while(t<=temp){
        t+=(++x);
        v.push_back(t);
    }
}
int main(){
    //compute();
  int tc;
  cin>>tc;
  while(tc--){
    long long int n;
    cin>>n;
      int f=0;
      long long temp=0;
    long long int beg=1,end=10000000000,mid=(beg+end)>>1;
      while(beg<=end){
          temp = (mid*(mid+1))>>1;
          if(temp==n){
              f=1;
              cout<<mid<<endl;
              break;
          }
          else if(temp<n){
              beg=mid+1;
          }
          else{
              end=mid-1;
          }
             mid=(beg+end)>>1;
      }
      if(f==0)
            cout<<-1<<endl;
  }
  return 0;
}