#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
llt a[5000000]={0};
llt compute(llt n){
  if(n==1){
    return 1;
  }
    if(n<5000000 and a[n-1]!=0){
        return a[n-1];
    }
    int ta = (n%2==0)?1+compute(n>>1):2+compute((3*n+1)>>1);
    if(n<5000000 and n>1 ){
        a[n-1]=ta;
        //return ta;
    }
    return ta;
}
int main(){
  for(int i=1;i<=5000000;i++){
      if(a[i-1]==0){
       a[i-1]=compute(i);
           //cout<<i<<" --> "<<a[i-1]<<endl;
      }
     
  }
    int result[5000000]={0};
    int ind=0,maxi=-1;
    for(int x=0;x<5000000;x++){
        if(a[x]>=maxi){
           ind=x;
            maxi=a[x];
        }
        result[x]=ind;
    }
    
  int tc,record_ind=0;
  scanf("%d",&tc);
  while(tc--){
    int n;
    scanf("%d",&n);
    
    printf("%d\n",result[n-1]+1);
  }
  return 0;
}
