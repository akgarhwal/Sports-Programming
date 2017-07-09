/*
	Author      : akgarhwal
	Date        : 09-07-2017 14:21:12
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

vector<int> ans;

void mul(vector<int> &res){
	int carry=0;
	for(int i=0; i < sz(res); i++){
		int temp = res[i];
		res[i] = (temp*2)%10 + carry;
		carry = (temp*2)/10;
	}
	while(carry){
		res.PB(carry%10);
		carry /= 10;
	}
}

void sum(int n){
	vector<int> res;
	res.PB(2);
    
	for(int i=2; i<=n ; i++){
		mul(res);
        int answer=0;
        for(int i=0; i< sz(res); i++){
            answer += res[i];
        }
        ans.PB(answer);
	}
}


int main(){

	ans.PB(0);
    ans.PB(2);
    sum(10000);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		cout<<ans[n]<<endl;
	}

	return 0;
}