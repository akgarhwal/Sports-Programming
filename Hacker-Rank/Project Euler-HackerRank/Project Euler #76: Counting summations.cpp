#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
int main(){
	long long dp[1001][1001]={0};
	for(int i=0;i<=1000;i++){
		dp[1][i]=1;
		dp[0][i]=1;
	}
	for(int i=0;i<=1000;i++){
		dp[i][0]= 0;
		dp[i][1]=1;
		dp[i][2]=2;
	}
	for(int i=2;i<=1000;i++){
		for(int j=3;j<=1000;j++){
			if(j<i){
				dp[i][j]=dp[i-1][j];
			}
			else if(j==i){
				dp[i][j]=(dp[i-1][j]+1)%mod;
			}
			else{
				dp[i][j]=(dp[i-1][j]+dp[i][j-i])%mod;
			}
		}
	}
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		cout<<dp[1000][n]-1<<endl;
	}
    return 0;
}