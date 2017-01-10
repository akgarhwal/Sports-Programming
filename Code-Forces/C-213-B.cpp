/*
	Author      : akgarhwal
	Date        : 05-01-2017 15:32:22
	Description : The Fibonacci Segment
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int len=0;
	for(int i=2; i< n; i++){
		int x=i;
		if(a[i]==(a[i-1]+a[i-2])){
			while(a[i]==(a[i-1]+a[i-2])){
				i++;
			}
			len = max((i-x),len);

		}
	}
	if(n==1)	len=-1;
	cout<<len+2<<endl;
	return 0;
}