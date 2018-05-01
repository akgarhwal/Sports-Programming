/*
	Author      : akgarhwal
	Date        : 30-04-2018 19:33:32
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
	if (s == "0"){
		cout<<s<<endl;
		return 0;
	}
	int count=0;
	for(int i=0; i< sz(s); i++){
		if (s[i] == '0') {
			count += 1;
		}
	}
	cout<<1;
	while(count--){
		cout<<0;
	}
	return 0;
}