/*
	Author      : akgarhwal
	Date        : 06-05-2018 19:52:48
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

	int n;
	cin>>n;
	string s;
	cin>>s;

	map<string, int> mp;
	for(int i=0; i< sz(s)-1; i++){
		string t = s.substr(i,2);
		//cout<<t<<endl;
		mp[t] += 1;
	}
	int mx = -1;
	string ans;
	tr(mp,i){
		if ((*i).S > mx) {
			mx = (*i).S;
			//cout<<mx<<endl;
			ans = (*i).F;
		}
	}
	cout<<ans<<endl;

	return 0;
}