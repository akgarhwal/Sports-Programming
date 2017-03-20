/*
	Author      : akgarhwal
	Date        : 09-03-2017 10:05:27
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

vi color(200001,0);
vector<bool> visit(200001,false);
vi Adj[200000+1];
void dfs(int u,int p=0){
	int col=1;
	for(int i=0; i< sz(Adj[u]); i++){
		int v = Adj[u][i];
		if(visit[v]==false){
			while(p>0 and  color[u]==col or color[p]==col){
				col++;
			}
			visit[v]=true;
			color[v]=col++;
			dfs(v,u);
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	
	for(int i=1; i< n; i++){
		int x,y;
		cin>>x>>y;
		Adj[x].pb(y);
		Adj[y].pb(x);
	}
	int ans = 0;
	for(int i=1; i<= n; i++){
		ans = max(ans,sz(Adj[i])+1);
	}
	cout<<ans<<endl;
	color[1]=1;
	dfs(1);
	for(int i=1; i<= n; i++){
		cout<<color[i]<<" ";
	}
	return 0;
}