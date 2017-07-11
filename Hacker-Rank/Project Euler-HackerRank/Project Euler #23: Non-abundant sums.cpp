#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int sumOfDivisors(int n)
{   int b=n;
    int prod=1;
    for(int k=2;k*k<=n;k++){
        int p=1;
        while(n%k==0){
            p=p*k+1;
            n/=k;
        }
        prod*=p;
    }
    if(n>1)
        prod*=1+n;
    return prod-b;
}
int main(){
    vi an;
    for(int i=1;i<=100000;i++){
        if(sumOfDivisors(i)>i){
            an.push_back(i);
        }
    }
    //cout<<an[0];
  int tc;
  cin>>tc;
  while(tc--){
      int n;
      cin>>n;
      int f=0,l=an.size()-1,fl=0;
      while(f<=l){
          if(n%an[f]==0 or n%an[l]==0 or n==an[f]+an[l]){
              cout<<"YES\n";
              fl=1;
              break;
          }
          else if(an[f]+an[l] > n){
              l--;
          }
          else{
              f++;
          }
      }
      if(fl==0)
        cout<<"NO\n";
      
  }
  return 0;
}