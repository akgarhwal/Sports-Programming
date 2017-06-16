/*
	Author      : akgarhwal
	Date        : 30-05-2017 16:49:18
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

bool isValid(string s){

	if(s[0]=='0'){
		return 0;
	}
	int n = sz(s);

	for(int i=1; i< n; i++){
		if(s[i] == '0' and s[i-1] == '0'){
			return false;
		}
		if(s[i] == '0' and s[i-1] >= '3'){
			return false;
		}
	}
	return true;
}

string s;
vector<ll> memo(1000001,-1);

ll solve(int i){
	// Base Case
	if(i <= 0){
		return 1;
	}
	if(memo[i]!=-1){
		return memo[i];
	}
	if(i==1){
		if(s[i]=='0'){
			return 1;
		}
		int x = s[i-1]-'0';
		int y = s[i]-'0';
		if(x*10+y <= 26){
			return 2LL;
		}
		else{
			return 1LL;
		}
	}

	// Base case end here

	if(s[i]=='0'){
		return  memo[i] = solve(i-2);
	}
	if(s[i-1]=='0'){
		return memo[i] = solve(i-1);
	}

	ll ans =0;
	int x = s[i-1]-'0';
	int y = s[i]-'0';
	if(x*10+y <= 26){
		ans += solve(i-1)+solve(i-2);
	}
	else{
		ans += solve(i-1);
	}
	return memo[i] = ans;
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	
	cin>>s;
	while(s!="0"){
		
		int n =sz(s);

		if(isValid(s)){

			for(int i=0; i< n; i++){
				memo[i]=-1;
			}

			cout<<solve(n-1)<<endl;

		}
		else{
			cout<<0<<endl;
		}
		cin>>s;

	}
	return 0;
}