/*
	Author      : akgarhwal
	Date        : 04-05-2017 21:11:19
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
const ll mod = 1000000007;


long long pow2(long long x,long long y){
    long long res=1;
    while(y){
    	if((y&1)==1){
    		res = (res*x)%mod;
    	}
    	x=(x*x)%mod;
    	y=y>>1;
    }
    return res;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string s;
	cin>>s;
	ll ans=0;
	ll a=0,b=0;
	ll last =0;
	for(int i=0; i< sz(s); i++){
		if(s[i] == 'a'){
			a++;
		}
		else{
			b++;
			if(a>0){
				last = pow2(2,a)-1;
				ans += last;
			}
			else{
				ans += last;
			}
			if(ans>mod){
				ans = ans%mod;
			}
		}
	}
	cout<<ans;
	return 0;
}