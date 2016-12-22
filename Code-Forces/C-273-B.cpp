/*
	Author      : akgarhwal
	Date        : 22-12-2016 16:11:38
	Description : Random Teams
*/

#include<iostream>
using namespace std;

long long calpair(long long n){
	return (long long)((n*(n-1))/2);
}

int main(){
	long long  n,m;
	cin>>n>>m;
	long long mi=0,mx=0;
	long long nop = n/m;
	long long rem = n%m;
	mi = calpair(nop)*m;
	mi += (nop*rem);

	mx = calpair(n-m+1);
	cout<<mi<<" "<<mx;
	return 0;
}