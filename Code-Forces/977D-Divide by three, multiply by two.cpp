/*
	Author      : akgarhwal
	Date        : 06-05-2018 20:49:50
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long	ll;
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

vector<ll> a(105,0);
unordered_map<ll,bool> mp;
vector<ll> ans(105,0);
int n;
bool chk(int x) {
	ll st=  a[x];
	int i = 0;
	ll nx;
	//cout<<"St index : "<<x<<endl;
	while(i < n-1) {
		//cout<<i<<" : "<<st<<endl;
		if (st%3 ==0 ){
			nx = st/3;
			if (mp[nx]) {
				ans[i] = st;
				st = nx;
				i++;

				//if (i == n-1) return true;
				continue;
			}
		}
		nx = st*(ll)2;
		if (mp[nx]) {
			ans[i] = st;
			st = nx;
			i++;
			//if (i == n-1) return true;
		}else{
			return false;
		}


	}
	ans[i]  = st;
	return true;
}


int main(){

	cin>>n;
	
	for(int i=0; i< n; i++){
		cin>>a[i];
		mp[a[i]] = true;
	}
	for(int i=0; i< n; i++){
		if (chk(i)){
			for(int i=0; i< n; i++){
				cout<<ans[i]<<" ";
			}
			return 0;
		}
	}


	return 0;
}