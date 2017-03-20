/*
	Author      : akgarhwal
	Date        : 23-02-2017 21:13:23
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n,k;;
	cin>>n>>k;
	vector<ll> a(n,0ll);
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	vector<ll> kpower;
	if(k==1){
		kpower.pb(k);
	}
	else if(k==-1){
		kpower.pb(k);
		kpower.pb(-k);
	} 
	else{
		kpower.pb(1);
		for(ll i=k; (i)<=(ll)(1e14) ; i = i*k){
				kpower.pb(i);
		}
	}

	map<ll,int> mp;
	ll ans=0;
	ll sum=0;
	for(int i=0; i< n; i++){
		mp[sum]++;
		sum += a[i];
		for(ll x : kpower){
			//ll x = kpower[j];
			ans += mp[sum-x];
		}
		
	}
	cout<<ans<<endl;

	return 0;
}