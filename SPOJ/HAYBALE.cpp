
/*
	Author      : akgarhwal
	Date        : 30-05-2017 14:03:26
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

#define MAX 1000001

int ans[MAX];

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k;
	cin>>n>>k;
	
	for(int i=0; i< k; i++){
		int a,b;
		cin>>a>>b;
		ans[a-1]++;
		ans[b]--;
	}
	for(int i=1; i< n; i++){
		ans[i] += ans[i-1];
	}
	sort(ans,ans+n);
	cout<<ans[n/2]<<endl;
	return 0;
}