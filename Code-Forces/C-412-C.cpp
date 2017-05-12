/*
	Author      : akgarhwal
	Date        : 07-05-2017 21:53:54
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

ll ans = 9223372036854775807;

bool isOK(ll a,ll b,ll p,ll q,ll x){

	ll dc = (q*x - b);
	if(dc < 0 ){
		return false;
	}

	ll nc = (p*x - a);
	if(nc < 0){
		return false; 
	}

	if(dc < nc){
		return false;
	}

	ans = min(ans,dc);

	return true;

}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		ll a,b,p,q;
		cin>>a>>b>>p>>q;

		if(p == 0 and a!=0){
			cout<<-1<<endl;
			continue;
		}
		if(p == 0 and a==0){
			cout<<0<<endl;
			continue;
		}
		ans = 9223372036854775807;
	
		ll lo = 1,hi = 1e10;
		while(lo <= hi){
			//cout<<endl<<lo<<" "<<hi<<"  "<<ans<<endl;
			ll mid = (lo+hi)/2;
			//cout<<"Mid : "<<mid<<endl;
			if(isOK(a,b,p,q,mid)){

				hi = mid-1;
			}
			else{

				lo = mid+1;

			}

		}
		if(ans == 9223372036854775807){
			cout<<"-1\n";
		}
		else
			cout<<ans<<endl;

	}
	return 0;
}