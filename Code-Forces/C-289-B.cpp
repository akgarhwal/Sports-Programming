/*
	Author      : akgarhwal
	Date        : 05-01-2017 11:50:47
	Description : Painting Pebbles
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int mi = 105,mx=0;
	for(int i=0; i< n; i++){
		cin>>a[i];
		mi = min(mi,a[i]);
		mx = max(mx,a[i]);
	}
	vector<int> mat[n];
	if(mx-mi > k){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
		for(int i=0; i< n; i++){
			for(int j=0; j< (a[i]/k); j++){
				for(int l=0; l< k; l++){
					mat[i].push_back(l+1);		
				}
			}
			for(int j=0; j< (a[i]%k); j++){
					mat[i].push_back(j+1);
			}
		}
		for(int i=0; i< n; i++){
			for(int j=0; j< mat[i].size(); j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}