/*
	Author      : akgarhwal
	Date        : 30-04-2018 21:20:29
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

bool mysort(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    if (a.F.F != b.F.F) {
        return a.F.F < b.F.F;
    }
    return a.F.S > b.F.S;
}

int main(){

	vector<pair<pair<int,int>,int>> v;
	int n;
	int x,y;
	cin>>n;

	for(int i=0; i< n; i++){
		cin>>x>>y;
		v.push_back({{x,y},i+1});
	}
	sort(all(v), mysort);
	
	for(int i=0; i< n-1; i++){
		int a = v[i].F.F;
		int b = v[i].F.S;
		int c = v[i+1].F.F;
		int d = v[i+1].F.S;
		if (c>=a and d<=b) {
			cout<<v[i+1].S<<" "<<v[i].S;
			return 0;
		}
	}

	cout<<"-1 -1";


	return 0;
}