/*
	Author      : akgarhwal
	Date        : 05-01-2017 09:18:38
	Description : Petya and Staircase
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,n,x;
	cin>>N>>n;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	bool yes=true;
	if(a[0]==1 or a[n-1]==N){
		yes=false;
	}
	else{
		for(int i=0; i< n-2; i++){
			if((a[i]+2)==(a[i+1]+1) and (a[i+1]+1)==a[i+2]){
				yes=false;
			}
		}
	}
	if(yes){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}