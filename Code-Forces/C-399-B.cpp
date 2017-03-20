/*
	Author      : akgarhwal
	Date        : 21-02-2017 07:48:27
	Description : lets solve it
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

ll getsize(ll n){
	if(n == 0 || n==1){
		return 1;
	}
	
	return (1ll+2ll*getsize(n>>1));
}
ll isOne(ll low,ll high,ll n,ll index){
	ll mid = (low+high)>>1;
	if(mid == index){
		return (n&1);
	}
	if(index < mid){
		isOne(low,mid-1,n>>1,index);
	}
	else{
		isOne(mid+1,high,n>>1,index);
	}
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n,l,r;
	cin>>n>>l>>r;
	ll sz = getsize(n);
	ll ans=0;
	for(ll i=l; i<=r ; i++){
		ans += isOne(1,sz,n,i);
	}
	cout<<ans<<endl;
	return 0;
}