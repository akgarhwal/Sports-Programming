/*
	Author      : akgarhwal
	Date        : 15-04-2017 09:49:14
	Description : Dijkstra algo  and shortest path
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

int Dijkstra(int s,int t,int n,vector<ii> Adj[]){
	vi dist(10001,1e8);
	dist[s] = 0;
	vector<bool> visit(10001,false);
	multiset<ii> Q;
	Q.insert({0,s});
 	while(!Q.empty()){
		auto p = Q.begin();
		Q.erase(p);
		
		int u = (*p).second;
		if(visit[u])	continue;

		visit[u] = true;
		for(int i=0; i< sz(Adj[u]); i++){
			auto P = Adj[u][i];
			int v = (P).first,W = (P).second;
			
			if(dist[v] > ( dist[u]+W)){
				dist[v] = dist[u]+W ;
				Q.insert({dist[v],v});		//key point 
			}
		}
	}

	return dist[t];
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<ii> Adj[n+1];
		unordered_map<string,int> mp;
		for(int i=1; i<= n; i++){
			string name;
			cin>>name;
			mp[name] = i;
			int m;
			cin>>m;
			for(int j=0; j<m ; j++){
				int v,w;
				cin>>v>>w;
				Adj[i].pb({v,w});
			}
		}
		int q;
		cin>>q;
		for(int i=0; i< q; i++){
			string s1,s2;
			cin>>s1>>s2;
			int u = mp[s1];
			int v = mp[s2];
			//cout<<u<<v<<"\n";
			cout<<Dijkstra(u,v,n,Adj)<<endl;
		}




	}
	return 0;
}