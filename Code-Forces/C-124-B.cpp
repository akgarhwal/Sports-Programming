/*
	Author      : akgarhwal
	Date        : 10-01-2017 10:28:28
	Description : Limit
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i<=n ; i++){
		cin>>a[i];
	}
	for(int i=0; i<=m ; i++){
		cin>>b[i];
	}
	if(n>m){
		int sa = (a[0]<0 ? -1 :1);
		sa = sa * (b[0]<0 ? -1 :1);
		if(sa < 0){
			cout<<"-";
		}
		cout<<"Infinity";
	}
	if(m>n){
		cout<<"0/1";
	}
	if(n==m){
		int sa = (a[0]<0 ? -1 :1);
		sa = sa * (b[0]<0 ? -1 :1);
		if(sa < 0){
			cout<<"-";
		}
		a[0] = abs(a[0]);
		b[0] = abs(b[0]);
		int g = __gcd(a[0],b[0]);
		cout<<a[0]/g<<"/"<<b[0]/g;
	}

	return 0;
}