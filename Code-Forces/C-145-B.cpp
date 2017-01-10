/*
	Author      : akgarhwal
	Date        : 07-01-2017 17:03:16
	Description : Train Study
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n,k;
	scanf("%d %d\n",&n,&k);
	int a[n];
	int b[n];
	for(int i=0; i< n; i++){
		scanf("%d ",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+n);
	int ind = n-k;
	set<int> st;
	cout<<b[n-k]<<endl;
	int LIM = b[n-k];
	int j=0;
	int c=0;
	for(; j< n and c < k; j++){
		if(a[j]>=LIM){
			printf("%d ", j+1);
			c++;
		}
	}
	

	return 0;
}