#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int main(){
  int n,k;
  cin>>n>>k;
  for(int i=125874;i<=n;i++){
      int a[10]={0};
      int x=i;
      while(x){
          a[x%10]++;x/=10;
      }
     
      set<llt> check;
      set<llt>::iterator it;
      for(int y=2;y<=k;y++){
          vi test(a,a+10);
          int z=i*y;
          while(z){
              test[z%10]--;
              z/=10;
          }
          
          int f=0;
          for(int q=0;q<10;q++){
              if(test[q]!=0){
                  f=1;
                  break;
              }
          }
          if(f==1){
              break;
          }
          check.insert(i*y);
      }
      if(check.size()==(k-1)){
          cout<<i<<" ";
          it=check.begin();
          while(it!=check.end()){
              cout<<*it++<<" ";
          }
          cout<<endl;
      }
  }
  return 0;
}