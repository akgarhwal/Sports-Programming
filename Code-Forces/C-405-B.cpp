/*
	Author      : akgarhwal
	Date        : 20-03-2017 10:16:04
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

vector<bool> visit(150001,false);
bool ans = true;
vector<int> Adj[150001];
long long NE=0;
ll EDGE=0;

void dfs(int u){
	if(visit[u]) return ;
	NE++;
	visit[u] = true;
	for(int i=0; i< Adj[u].size(); i++){
		int v = Adj[u][i];
		EDGE++;
		if(visit[v]==false){
			dfs(v);
		}
	}
	
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	
	for(int i=0; i< m; i++){
		int x,y;
		cin>>x>>y;
		Adj[x].pb(y);
		Adj[y].pb(x);
	}
	for(int i=1; i<=n ; i++){
		if(visit[i]==false){
			NE=0;
			EDGE=0;
			dfs(i);
			//cout<<"I :: "<<i<<" NE :: "<<NE<<" EDGE :: "<<EDGE<<endl;
			if(EDGE/2ll != (NE*(NE-1))/2ll){
				ans = false;
				break;
			}

		}
	}
	if(ans){
		cout<<"YES";
	}

	else{
		cout<<"NO";
	}
	return 0;

}