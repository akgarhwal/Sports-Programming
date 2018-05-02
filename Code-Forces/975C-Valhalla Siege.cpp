/*
	Author      : akgarhwal
	Date        : 01-05-2018 20:17:23
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

	int n,q;
	cin>>n>>q;
	vector<int> a(n);
	vector<ll> k(q);

	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	for(int i=0; i< q; i++){
		cin>>k[i];
	}

	vector<ll> sum(n,0LL);
	sum[0] = a[0];
	for(int i=1; i< n; i++){
		sum[i] = sum[i-1] + a[i]; 
	}
	int alive = n;
	int i = 0;
	ll se = 0;
	while (q--) {
		se += k[i];
		//cout<<"Se : "<<se<<endl;
		vector<ll>::iterator p = upper_bound(sum.begin(), sum.end(), se);
		int pos = p - sum.begin();
		//cout<<"pos "<<pos<<endl;
		if(pos == n) {
			alive = n;
			se = 0;
		} else {
			alive = n - pos;
		}
		cout<<alive<<endl;
		i+=1;
	}



	return 0;
}
