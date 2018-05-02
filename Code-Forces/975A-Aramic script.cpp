/*
	Author      : akgarhwal
	Date        : 01-05-2018 19:33:50
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

	set<string> st;
	int n;
	cin>>n;
	while (n--){
		string s;
		cin>>s;
		set<char> x(all(s));
		string t = "";
		tr(x,i){
			t += *i;
		}
		st.insert(t);
	}
	cout<<sz(st);
	return 0;
}
