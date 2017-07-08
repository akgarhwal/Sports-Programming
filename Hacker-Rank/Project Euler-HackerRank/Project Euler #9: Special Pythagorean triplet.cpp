#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int compute(int n){
    llt ans=-1;
      for(int a=1;a<=n/3;a++){
          for(int b=a+1;b<=n/2;b++){
              int c=n-(a+b);
              llt sq = (a*a)+(b*b);
              if(sq==c*c and c>a and c>b){
                  llt temp=a*b*c;
                  ans=max(ans,temp);
                  break;
              }
          }
      }
    return ans;
}
int main(){
    vi v;
    for(int x=1;x<=3000;x++){
        v.push_back(compute(x));
    }
  int tc;
  cin>>tc;
  while(tc--){
      int n;
      cin>>n;
      cout<<v[n-1]<<endl;
  }
  return 0;
}
