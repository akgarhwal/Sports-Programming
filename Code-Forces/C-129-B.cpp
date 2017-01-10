/*
	Author      : akgarhwal
	Date        : 08-01-2017 15:42:21
	Description : Little Elephent
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	int a;
	ll ans=0,cur=0;
	cin>>cur;
	for(int i=1; i< n; i++){
		cin>>a;
		if(a+ans<= cur){
			ans += (cur-a-ans);
		}
		if(a+ans>cur){
			cur = a+ans;
		}
		//cout<<cur<<"  ";
	}

	cout<<ans<<endl;
	return 0;
}