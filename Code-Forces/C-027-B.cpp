/*
	Author      : akgarhwal
	Date        : 15-01-2017 09:52:05
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[51];
int won[51];
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
		won[x]++;

	}
	int f = n-1,u=0,v=0;
	for(int i=1; i<= n; i++){
		//cout<<a[i]<<" ";
		if(a[i]!=f and u==0){
			u=i;
			continue;
		}
		if(a[i]!=f and v==0){
			v=i;
		}
	}
	if(won[u]>won[v]){
		cout<<u<<" "<<v<<endl;
	}
	else{
		cout<<v<<" "<<u<<endl;
	}
	return 0;
}