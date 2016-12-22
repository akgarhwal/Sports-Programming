/*
	Author      : akgarhwal
	Date        : 22-12-2016 16:52:11
	Description : Vanya and Laterns
*/

#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
	int n,l;
	cin>>n>>l;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int res=a[0];
	for(int i=1; i< n; i++){
		res=max(res,(a[i]-a[i-1]));
	}
	double resd = res/(2.0);
	if((resd<=(double)a[0]) or (resd<=(double)(l-a[n-1]))){
		printf("%.10lf\n",(double)(max(a[0],(l-a[n-1]))));
	}
	else{
		printf("%.10lf\n",(resd));
	}
	return 0;
}