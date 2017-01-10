/*
	Author      : akgarhwal
	Date        : 07-01-2017 12:34:38
	Description : Archer
*/

#include <iostream>
using namespace std;

int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double r = ((b-a)/b)*((d-c)/d);
	double ans = (a/b) / (1.0-r);
	cout<<ans<<endl;
	return 0;
}