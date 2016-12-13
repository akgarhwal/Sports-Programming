/*       _                    _                  _ 
    __ _| | ____ _  __ _ _ __| |____      ____ _| |
   / _` | |/ / _` |/ _` | '__| '_ \ \ /\ / / _` | |
  | (_| |   < (_| | (_| | |  | | | \ V  V / (_| | |
   \__,_|_|\_\__, |\__,_|_|  |_| |_|\_/\_/ \__,_|_|
             |___/                                 		*/
#include<bits/stdc++.h>
using namespace std;

#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define pi(t) printf("%d ",t)
#define pl(t) printf("%lld ",t)

typedef long long ll;

int main(){
	int tc,cs=0;
	si(tc);
	while(tc--){
		int n,m;
		si(n);si(m);
		vector<int> Adj[n];
		for(int i=0;i<m;i++){
			int u,v;
			si(u);si(v);
			Adj[u].push_back(v);
			Adj[v].push_back(u);
		}
		int source,desti;
		si(source);si(desti);
		queue<int> qf;
		vector<int> dist(n,-1);
		dist[source]=0;
		qf.push(source);
		while(!qf.empty()){
			int u = qf.front();qf.pop();
			for(int i=0;i<Adj[u].size();i++){
				int x = Adj[u][i];
				if(dist[x]==-1){
					dist[x]=dist[u]+1;
					qf.push(x);
				}
			}
		}
		// for(int i=0;i<n;i++){
		// 	cout<<dist[i]<<" ";
		// }
		queue<int> qf2;
		vector<int> dist2(n,-1);
		dist2[desti]=0;
		qf2.push(desti);
		while(!qf2.empty()){
			int u = qf2.front();qf2.pop();
			for(int i=0;i<Adj[u].size();i++){
				int x = Adj[u][i];
				if(dist2[x]==-1){
					dist2[x]=dist2[u]+1;
					qf2.push(x);
				}
			}
		}
		// cout<<endl;
		// for(int i=0;i<n;i++){
		// 	cout<<dist2[i]<<" ";
		// }
		// cout<<endl;
		int res = dist[0]+dist2[0];
		for(int i=1;i<n;i++){
			res = max(res,(dist[i]+dist2[i]));
		}
		cout<<"Case "<<++cs<<": "<<res<<endl;
	}
	return 0;
}