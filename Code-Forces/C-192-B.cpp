/*
	Author      : akgarhwal
	Date        : 05-01-2017 20:49:51
	Description :  Road Construction
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a,b;
	vector<int> A(n+1,0);
	for(int i=0; i< m; i++){
		cin>>a>>b;
		A[a]=1;
		A[b]=1;
	}
	int starNode=0;
	for(int i=1; i<= n; i++){
		if(A[i]==0){
			starNode=i;
			break;
		}
	}
	cout<<n-1<<endl;
	for(int i=1; i<=(n); i++){
		if(i!=starNode){
			cout<<starNode<<" "<<i<<endl;
		}
	}
	return 0;
}