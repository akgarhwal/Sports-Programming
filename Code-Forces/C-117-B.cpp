/*
	Author      : akgarhwal
	Date        : 07-01-2017 16:47:36
	Description : Clock
*/

#include <iostream>
using namespace std;

int main(){
	int d,n;
	cin>>d>>n;
	int a[n];
    for(int i=0; i< n; i++){
    	cin>>a[i];
    }
    int ans=0;
    for(int i=0; i< n-1; i++){
    	ans += (d-a[i]);
    }
    cout<<ans;

	return 0;
}