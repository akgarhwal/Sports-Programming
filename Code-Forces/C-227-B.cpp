/*
	Author      : akgarhwal
	Date        : 05-01-2017 14:37:20
	Description : George and Round
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	for(int i=0; i< m; i++){
		cin>>b[i];
	}
	int ans=n;
	for(int i=n-1; i >= 0; i--){
		int A = a[i];
		bool find = false;
		for(int j=0; j< m; j++){
			if(b[j]==A){
				b[j]=0;
				find=true;
				break;
			}
		}
		if(find){
			ans--;
		}
		else{
			bool gr=false;
			for(int k=m-1; k>=0; k--){
				if(b[k]>A){
					gr=true;
					b[k]=0;
					ans--;
					break;
				}
			}
		}
	}

	cout<<ans;

	return 0;
}