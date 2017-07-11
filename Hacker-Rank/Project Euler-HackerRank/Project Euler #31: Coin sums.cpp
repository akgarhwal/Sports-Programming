#include<bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
long long int a[8][100000+1]={0};
int compute(int n){
     int c[]={1,2,5,10,20,50,100,200};
    int c1=8;
		int x=0,i=0;
    
		for(int i=0;i<c1;i++){
			a[i][0]=1;
		}
		for(int i=0;i<=n;i++){
			if(i%c[0]==0)    
                a[0][i]=1;
            else
                a[0][i]=0;
                  
		}
		for(int i=1;i<c1;i++){
			for(int j=1;j<=n;j++){
				if(j<c[i]){
					a[i][j] = a[i-1][j];
				}
				else{
					a[i][j] = a[i-1][j]+a[i][j-c[i]];
				}
				if(a[i][j]>1e9+7){
					a[i][j]-=1000000007;
				}
			}
		}
    return a[c1-1][n];
}
int main(){
   // int a[100001]={0};
   // for(int i=1;i<=100000;i++){
   //     a[i]=compute(i);
   // }
    compute(100000);
    int tc;
    cin>>tc;
   
    while(tc--){
		int n;
    cin>>n;
		
		cout<<a[8-1][n]<<endl;
    }
}