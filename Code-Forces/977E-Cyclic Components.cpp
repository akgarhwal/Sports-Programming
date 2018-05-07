/*
	Author      : akgarhwal
	Date        : 06-05-2018 20:34:41
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

vector<bool> vis(200005+5,false);
vector<int> adj[200005+5];
int num = 0;
void dfs(int s){
	if (vis[s]){
		return ;
	}
	num++;
	vis[s] = true;
	for(int i=0; i< adj[s].size(); i++){
		int ne = adj[s][i];
		dfs(ne); 
	}
	return ;
}

vector<bool> temp(200005,false);
bool chk(int s){
	bool res = true;
	if (adj[s].size() !=2){
		return false;
	}
	if (temp[s]){
		return true;
	}
	temp[s] = true;
	for(int i=0; i< adj[s].size(); i++){
		int ne = adj[s][i];
		res = res and chk(ne);
		if (res ==false){
			return res;
		} 
	}
	return res;

}


int main(){

	int n,m;
	cin>>n>>m;
	
	for(int i=0; i< m; i++){
		int x,y;
		cin>>x>>y;
		adj[x].PB(y);
		adj[y].PB(x);
	}
	int ans=0;
	for(int i=1; i<= n; i++){
		if (vis[i] ==false){
			num = 0;
			dfs(i);
			//cout<<i<<" : "<<num<<endl;
			if (num >= 3) {
				ans += chk(i);
			}
		}
	}
	cout<<ans;

	return 0;
}