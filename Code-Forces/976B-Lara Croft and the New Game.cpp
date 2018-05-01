/*
	Author      : akgarhwal
	Date        : 30-04-2018 20:16:55
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


int main(){
	
	ll n,m,k;
	cin>>n>>m>>k;

	ll x=1,y=1;
	if ( k < n){
		cout<< x+k <<" "<<y<<endl;
		return 0;
	}
	if (k < (n+m-1)) {
		cout<<n<<" "<< y+(k-n+1)<<endl;
		return 0;
	}
	k = k-(n+m-2);
	if (m-1 == 1){
		cout<<n-k<<" "<<2<<endl;
		return 0;
	}


	ll lvl_up = k / (m-1);
	x = n -lvl_up;
	if (lvl_up & 1){
		y = 2;
	} else {
		y = m;
	}

	ll rem = k%(m-1);  
	if (rem >0) {
		x -= 1;
		rem -= 1;
		if (lvl_up & 1){
			y += rem;
		}else {
			y -= rem;
		}
	}
	cout<<x<<" "<<y<<endl<<endl;
		
	return 0;
}