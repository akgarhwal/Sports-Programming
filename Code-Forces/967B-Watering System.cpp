/*
	Author      : akgarhwal
	Date        : 29-04-2018 19:20:56
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

	int n,a,b;
	cin>>n>>a>>b;
	vi v;
	int x;
	double sum = 0.0;
	for(int i=0; i< n; i++){
		cin>>x;
		sum += x; 
		v.push_back(x);
	}
	int mx = (v[0] * a) / (double)b;
	sort(v.begin()+1,v.end());
	int t = v.size();
	int ans=0;
	while (sum > mx and t > 0) {
		sum -= v[t-1];
		t -= 1;
		ans += 1;
	}
	cout<<ans<<endl;
	return 0;
}
