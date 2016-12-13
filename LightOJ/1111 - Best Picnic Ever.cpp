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
		int k,n,m;
		si(k);si(n);si(m);
		vector<int> K;
		for(int i=0;i<k;i++){
			int x;
			si(x);
			K.push_back(x);
		}
		
		vector<int> Adj[n+1];
		for(int i=0;i<m;i++){
			int u,v;
			si(u);si(v);
			Adj[u].push_back(v);
			//Adj[v].push_back(u);
		}
		// int source,desti;
		// si(source);si(desti);
		vector<int> vcity(n+1,0);
		int len = K.size(),i=0;
		while(len--){
			int source = K[i++];
			//cout<<source<<endl;
			queue<int> qf;
			vector<int> dist(n+1,-1);
			dist[source]=0;
			vcity[source]+=1;
			qf.push(source);
			while(!qf.empty()){
				int u = qf.front();qf.pop();
				for(int i=0;i<Adj[u].size();i++){
					int x = Adj[u][i];
					if(dist[x]==-1){
						dist[x]=dist[u]+1;
						vcity[x]+=1;
						qf.push(x);
					}
				}
			}
		}
		// for(int i=1	;i<=n;i++){
		// 	cout<<vcity[i]<<" ";
		// }
		
		int res = 0;
		for(int i=1;i<=n;i++){
			res += (vcity[i]==k)?1:0;
		}
		cout<<"Case "<<++cs<<": "<<res<<endl;
	}
	return 0;
}
