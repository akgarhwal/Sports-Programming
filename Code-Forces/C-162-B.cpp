/*
	Author      : akgarhwal
	Date        : 04-01-2017 17:01:26
	Description : Tree and nutes
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int res=n+n-1,x,y;
	cin>>x;
	res+=x;
	for(int i=1; i< n; i++){
		cin>>y;
		res += (abs(y-x));
		x=y;
	}
	cout<<res;
	return 0;
}	