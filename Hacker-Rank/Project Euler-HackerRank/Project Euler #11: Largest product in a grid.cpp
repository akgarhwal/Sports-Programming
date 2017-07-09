#include<bits/stdc++.h>
using namespace std;
int main(){
  int t=20;
  int a[20][20];
  long long int ans=1;
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      cin>>a[i][j];
    }
  }
  long long int temp=1;
  for(int i=0;i<=19;i++){
    for(int j=0;j<=19;j++){
      if(j+3<=19)
        temp = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
      ans=max(temp,ans);
      if(j+3<=19 and i+3<=19)
      temp = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
      ans=max(temp,ans);
      if(i+3<=19)
      temp = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
      ans=max(temp,ans);
        if(i+3<=19 and j>=3)
        temp = a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
        ans=max(temp,ans);
    }
  }
  cout<<ans<<endl;
  return 0;
}