/*
	Author      : akgarhwal
	Date        : 03-02-2017 08:15:56
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

ll hah[100001];

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,x;
	cin>>n;
	
	for(int i=0; i< n; i++){
		cin>>x;
		hah[x]++;
	}
	ll dp[100001];
	dp[1] = hah[1]*1ll;
	dp[2] = max((hah[2]*2ll),dp[1]);
	ll ans=max(dp[1],dp[2]);
	for(ll i=3; i< 100001; i++){
		dp[i] = max((dp[i-2] + hah[i]*i),ans);
		ans = max(ans,dp[i]);
	}
	cout<<ans<<endl;
	return 0;
}