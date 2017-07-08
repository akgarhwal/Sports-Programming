/*
	Author      : akgarhwal
	Date        : 08-07-2017 11:30:01
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

	ll fib[50];
	int x=0;
	ll max  = 4e16;
	ll a=1,b=1,c=0LL;
	while(c <= max){
		c =a+b;
        if(c%2==0){
	       	fib[x++] = c;
        }
		a = b;
		b = c;
	}
    int X = x; //total even no
	int tc;
	cin>>tc;
	while(tc--){
		ll ans=0LL;
		ll n;
		cin>>n;
		x=0;
		while(fib[x] <= n and x < X){
			ans  += fib[x];
			x++;
		}
		cout<<ans<<endl;
	}
	return 0;
}