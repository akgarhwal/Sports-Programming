/*
	Author      : akgarhwal
	Date        : 04-01-2017 15:06:24
	Description : Amr and Pins
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long r,x,y,a,b;
	cin>>r>>x>>y>>a>>b;
	long long  dist = ceil(sqrt(((a-x)*(a-x))+((b-y)*(b-y))));
	cout<<ceil(dist/(r*2.0))<<endl;
	return 0;
}