/*
	Author      : akgarhwal
	Date        : 07-01-2017 12:02:51
	Description : Country Side
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int ans=0;
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	for(int i=0; i< n; i++){
		int x=0,j=i+1;
		while(j<n and a[j-1]>=a[j]){
			x++;
			j++;
		}
		int y=0;
		j = i-1;
		while(j>=0 and a[j]<=a[j+1]){
			y++;
			j--;
		}
		ans = max(ans,x+y+1);
	}
	cout<<ans<<endl;
	return 0;
}