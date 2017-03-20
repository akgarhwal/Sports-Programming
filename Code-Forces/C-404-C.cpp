/*
	Author      : akgarhwal
	Date        : 15-03-2017 20:51:03
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

bool Check(ll mid,ll n, ll m){
	ll st_tot = 0;
	if(mid<=m+1){
		st_tot = n;
	} 
	else{
		ll val = mid-m-1;
		st_tot = n - (val*(val+1))/2;
	}
	if(st_tot <= mid){
		return true;
	}
	return false;

 	
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n,m;
	cin>>n>>m;
	if(n<=m){
		cout<<n<<endl;
		return 0;
	}
	long long st=m+1,end = m+2e9;
	ll ans=end;
	while(st <= end){
		ll mid = (st+end)>>1;
		if(Check(mid,n,m)){
			ans = mid;
			end = mid-1;
		}
		else{
			st = mid+1;
		}
	} 
	
	// if(Check(ans,n,m)>0){
	// 	ans++;
	// }
	cout<<ans<<endl;



	// cout<<endl;
	// for(int i=1; i< n; i++){

	// 	cout<<i<<"th Day :: "<<Check(i,n,m)<<endl;
	// }
	// if(Check(st,n,m)<0 and Check(st-1,n,m)>0){
	// 	cout<<"If :: "<<st<<endl;
	// }
	// else 
	// 	cout<<(st)<<endl;
	return 0;
}