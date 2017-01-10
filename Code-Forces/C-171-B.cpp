/*
	Author      : akgarhwal
	Date        : 05-01-2017 09:41:12
	Description : Books
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int st=0,end=0,sum=0,ans=0;
	while(st<n){
		while(end<n and (sum+a[end])<=t){
			sum+=a[end];
			end++;
		}
		ans=max(ans,(end-st));
		sum-=a[st];
		st++;
	}
	cout<<ans;
	return 0;
}