/*
	Author      : akgarhwal
	Date        : 31-05-2017 10:46:52
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long	ll;
typedef vector<int>	vi;
typedef pair<int,int>	pi;
#define F		first
#define S		second
#define PB		push_back
#define MP		make_pair
#define sz(a)		int((a).size())
#define all(c)		(c).begin(),(c).end()
#define REP(i,a,b)	for(int i = a; i < b; i++)
#define tr(c,i)		for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)	((c).find(x) != (c).end())
#define cpresent(c,x)	(find(all(c),x) != (c).end())
#define MOD		1000000007 	/* 10^9+7*/

ll no_of_Parata(ll r,ll k){
	ll c = k/r * 2LL;
	ll sq = sqrt(1LL+c*4LL)+1e-7;
	
	ll n = (-1LL + sq)/2LL;
	return n;
}

bool check(int a[],int n,int k,int tot){

	int to=0;
	for(int i=0; i< n; i++){
		to += no_of_Parata(a[i],k);
	}
	return to>=tot;
}


int main(){

	
	int tc;
	cin>>tc;
	while(tc--){

		int N;
		cin>>N;
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i< n; i++){
			cin>>a[i];
		}

		ll lo = 1,hi = 1e9;
		ll ans = 1e9;
		while(lo<=hi){
			
			ll mid = (lo+hi)/2LL;
			if(check(a,n,mid,N)){
				ans = min(ans,mid);
				hi = mid-1;

			}
			else{
				lo = mid+1;
			}

		}

		cout<<ans<<endl;

	}

	return 0;
}