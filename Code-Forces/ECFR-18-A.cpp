/*
	Author      : akgarhwal
	Date        : 27-03-2017 20:02:18
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n;
	cin>>n;
	vector<ll> v(n,0ll);
	for(int i=0; i< n; i++){
		cin>>v[i];
	}
	sort(all(v));
	ll co=0;
	ll mi=2e9+2;
	for(int i=0; i<n-1 ; i++){
		mi = min(mi,abs(v[i]-v[i+1]));
	}
	for(int i=0; i< n-1; i++){
		if(mi == abs(v[i]-v[i+1])){
			co++;
		}
	}
	cout<<mi<<" "<<co;
	return 0;
}