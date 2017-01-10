/*
	Author      : akgarhwal
	Date        : 04-01-2017 21:11:53
	Description : OR in Matrix
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int B[n][m];
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cin>>B[i][j];
		}
	}
	int A[n][m];
	int C[n][m];
	
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			A[i][j]=1;
			C[i][j]=0;
		}
	}

	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			if(B[i][j]==0){
				for(int x=0; x< n; x++){
					A[x][j]=0;
				}
				for(int x=0; x< m; x++){
					A[i][x]=0;
				}
			}
		}
	}
	bool res=true;

	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			if(A[i][j]==1){
				for(int x=0; x< n; x++){
					C[x][j]=1;
				}
				for(int x=0; x< m; x++){
					C[i][x]=1;
				}

			}
		}
	}

	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			if(B[i][j]!=C[i][j]){
				res=false;
				break;
			}
		}
	}

	if(res){
		cout<<"YES\n";
		for(int i=0; i< n; i++){
			for(int j=0; j< m; j++){
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}