// Longest Common Subsequence
/*
5 6
1 2 3 4 1
3 4 1 2 1 3
Ans : 1 2 3
*/
// author = "akgarhwal"

#include <iostream>
using namespace std;
int n,m;
int a[10001],b[1001];
int memo[1001][1001];
int LCS(int i,int j){

	if(i<0 or j<0 ){
		return 0;
	}
	if(memo[i][j]!=-1){
		return memo[i][j];
	}
	int ans=0;
	ans = max(LCS(i-1,j),max(LCS(i,j-1),LCS(i-1,j-1)+(a[i]==b[j])));
	return memo[i][j]=ans;
}

int ans[1001];
void findLCS(int i,int j,int n){

	if(i<0 or j<0 ){
		return ;
	}
	if(n==0){
		return ;
	}
	//cout<<i<<" "<<j<<endl;
	if(memo[i][j-1] == memo[i][j] ){
		findLCS(i,j-1,n);
	}
	else if(memo[i-1][j] == memo[i][j] ){
		findLCS(i-1,j,n);
	}
	else if(memo[i-1][j-1] != memo[i][j]){
		ans[n] = a[i];
		cout<<a[i]<<" ";
		findLCS(i-1,j-1,n-1);
		return ;
	}
	

}

int main(){
	cin>>n>>m;
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	for(int j=0; j< m; j++){
		cin>>b[j];
	}
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			memo[i][j]=-1;
		}
	}

	int len = LCS(n-1,m-1);
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cout<<memo[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	findLCS(n-1,m-1,len);
	cout<<endl;
	for(int i=1; i<=len ; i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}