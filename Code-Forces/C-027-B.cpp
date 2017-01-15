/*
	Author      : akgarhwal
	Date        : 15-01-2017 09:52:05
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[51];
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;

	for(int i=0; i< ((n*(n-1))/2 -1); i++){
		int x,y;
		cin>>x>>y;
		a[x]++;
		a[y]++;

	}
	int f = n-1;
	for(int i=1; i<= n; i++){
		//cout<<a[i]<<" ";
		if(a[i]!=f){
			cout<<i<<" ";
		}
	}
	return 0;
}