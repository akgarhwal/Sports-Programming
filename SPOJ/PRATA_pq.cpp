/*
	Author      : akgarhwal
	Date        : 31-05-2017 11:30:52
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

	int tc;
	cin>>tc;
	while(tc--){

		int N;
		cin>>N;
		int l;
		cin>>l;
		int a[l];
		priority_queue< pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
		for(int i=0; i< l; i++){
			cin>>a[i];
			pq.push({a[i],i});
		}
		int co=0;
		int ans=0;
		while(co<N){
			pair<int,int> pi =  pq.top();pq.pop();
			int X = pi.first;
			int L = a[pi.second];
			int n = (X*2)/L;
			int x = (-1+(sqrt(1+4*n)+1e-7))/2;
			pq.push({a[pi.second]*(x+1)+X,pi.second});
			ans = max(ans,pi.first);
			co++;
		}
		cout<<ans<<endl;

	}

	
	return 0;
}