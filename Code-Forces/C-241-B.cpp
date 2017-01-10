/*
	Author      : akgarhwal
	Date        : 07-01-2017 11:19:33
	Description : Artr union
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int b[n][m];
	for(int i=0; i< n; i++){
		for(int j=0;j< m; j++){
			cin>>a[i][j];
		}
	}
	b[0][0] = a[0][0];
	for(int i=1; i< n; i++){
		b[i][0] = b[i-1][0]+a[i][0]; 
	}
	for(int j=1; j< m; j++){
		b[0][j] = b[0][j-1]+a[0][j];
	}
	for(int i=1; i< n; i++){
		for(int j=1; j< m; j++){
			b[i][j] = max(b[i-1][j],b[i][j-1]) + a[i][j];
			//cout<<b[i][j]<<" ";
		}
	}
	for(int i=0; i< n; i++){
		cout<<b[i][m-1]<<" ";
	}
	return 0;
}