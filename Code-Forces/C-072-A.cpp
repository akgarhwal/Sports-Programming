/*
	Author      : akgarhwal
	Date        : 15-01-2017 10:18:19
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,x;
	cin>>n;
	int a[n];
	vector<ll> v;
	cin>>x;
	ll count=1,last=x;
	for(int i=1; i<n ; i++){
		cin>>x;
		if(last == x){
			count++;
		}
		else{
			v.push_back(count);
			count=1;
		}
		last=x;
		
	}
	v.push_back(count);
	ll res=0;
	for(int i=0; i< v.size(); i++){
		res += (v[i]*(v[i]-1ll))/2ll;
	}
	cout<<res+n<<endl;
	return 0;
}