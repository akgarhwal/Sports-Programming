/*
	Author      : akgarhwal
	Date        : 31-05-2017 15:43:00
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

int par[10001];
int size[10001];
void init(int N){
	for(int i=0; i<=N ; i++){
		par[i] = i;
		size[i]=1;
	}
}

int find(int i){
return (i==par[i])?(i):(par[i] = find(par[i]));
}

void union1(int i,int j){
	int r1 = find(i);
	int r2 = find(j);
	if(r1 != r2){

		if(size[r1] > size[r2]){
			par[r2] = r1;
			size[r1] += size[r2];
		}
		else{
			par[r1] = r2;
			size[r2] += size[r1];
		}
	}
}


int main(){

	int n,m;
	cin>>n>>m;
	init(n);
	vector<pair<int,pair<int,int> > > ed;
	for(int i=0; i< m; i++){
		int u,v,w;
		cin>>u>>v>>w;
		ed.PB({w,{u,v}});
	}
	sort(all(ed));
	ll ans=0;
	for(int i=0; i< m; i++){
		int u = ed[i].S.F;
		int v = ed[i].S.S;
		
		if(find(u)!=find(v)){
			ans += ed[i].F;
			union1(u,v);
		}
	}
	cout<<ans<<endl;
	return 0;
}