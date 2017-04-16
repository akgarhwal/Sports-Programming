/*
	Author      : akgarhwal
	Date        : 15-04-2017 09:12:15
	Description : SPOJ MST
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

struct Edge{
	int u;
	int v;
	int w;
};
bool myfun(Edge a,Edge b){
	if(a.w != b.w){
		return a.w < b.w;
	}
	return a.u<b.u;
}

class Disjoint{
private:
	vector<int> p,rank;
public:
	Disjoint(int n){
		rank.assign(n+1,0);
		p.assign(n+1,0);
		for(int i=0; i<= n; i++){
			p[i] = i;
		}
	}
	int findSet(int i){
		return (p[i] == i)?i:(p[i] = findSet(p[i]));
	} 
	bool isSameSet(int i,int j){
		return findSet(i) == findSet(j);
	}
	void unionSet(int i,int j){
		if(!isSameSet(i,j)){

			int x = findSet(i);
			int y = findSet(j);
			if(rank[x] > rank[y]){
				p[y] = x;
			}
			else{
				p[x] = y;
				if(rank[x] == rank[y]){
					rank[y]++;
				}
			}
		}
	}
};

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<Edge> Adj;
		for(int i=1; i<= n; i++){
			string name;
			cin>>name;
			int m;
			cin>>m;
			for(int j=0; j< m; j++){
				int v,w;
				cin>>v>>w;
				Edge edge ;
				edge.u = i;
				edge.v = v;
				edge.w = w;
				Adj.pb(edge);
			}
		}
		sort(all(Adj),myfun);
		// print edges
		// for(int i=0; i< sz(Adj); i++){
		// 	cout<<Adj[i].w<<" "<<Adj[i].u <<" "<<Adj[i].v<<endl;
		// }	
		Disjoint ds(n+1);

		ll ans =0LL;
		for(int i=0; i< sz(Adj); i++){
			
			int u = Adj[i].u,v = Adj[i].v,w = Adj[i].w;

			if(ds.isSameSet(u,v) == false){
				ds.unionSet(u,v);
				ans += w; 
			} 
		}
		cout<<ans<<endl;





	}
	return 0;
}