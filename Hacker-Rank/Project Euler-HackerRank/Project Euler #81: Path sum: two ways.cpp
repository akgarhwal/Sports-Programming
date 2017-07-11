#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int main(){
  int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
  }
  llt res[n][n];
  llt temp=0,temp1=0;
  for(int i=0;i<n;i++){
      temp+=a[0][i];
      res[0][i]=temp;
      temp1+=a[i][0];
      res[i][0]=temp1;
  }
  temp=0;
  for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
          if(res[i-1][j] <= res[i][j-1] ){
              res[i][j] = res[i-1][j] + a[i][j];
          }
          else{
              res[i][j] = res[i][j-1] + a[i][j];
          }
      }
  }
  cout<<res[n-1][n-1]<<endl;
  return 0;