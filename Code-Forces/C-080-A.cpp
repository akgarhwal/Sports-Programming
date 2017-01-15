/*
	Author      : akgarhwal
	Date        : 14-01-2017 17:54:55
	Description : Lets try the hard way
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	int x;
	cin>>x;
	ll res=x;
	for(int i=2; i<= n; i++){
		cin>>x;
		res += ((x-1)*i)+1;
	}
	cout<<res<<endl;
	return 0;
}