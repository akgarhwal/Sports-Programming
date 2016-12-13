/*       _                    _                  _ 
    __ _| | ____ _  __ _ _ __| |____      ____ _| |
   / _` | |/ / _` |/ _` | '__| '_ \ \ /\ / / _` | |
  | (_| |   < (_| | (_| | |  | | | \ V  V / (_| | |
   \__,_|_|\_\__, |\__,_|_|  |_| |_|\_/\_/ \__,_|_|
             |___/                                 		

When I wrote this, only God and I understood what I was doing
Now, God only knows												*/

#include<bits/stdc++.h>
using namespace std;

#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define pi(t) printf("%d ",t)
#define pl(t) printf("%lld ",t)

typedef long long ll;

vector<int> fun(int n){
	vector<int> pf;
	int X= n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			pf.push_back(i);
			while(n%i==0){
				n=n/i;
			}
		}
	}
	if(n>1 and X!=n){
		pf.push_back(n);
	}
	return pf;
}
int main(){
	vector<int> Adj[1001];
	for(int i=4;i<=1000;i++){
	//	cout<<endl<<i<<" ==> ";
		vector<int> pf=fun(i);
		for(int j=0;j<pf.size();j++){
			Adj[i].push_back(i+pf[j]);
	//		cout<<i+pf[j]<<" ";
		}
	}
	int tc,cs=0;
	si(tc);
	while(tc--){
		int s,t;
		si(s);si(t);
		vector<int> dist(1001,-1);
		queue<int> q;
		q.push(s);
		dist[s]=0;
		bool flag=false;
		while(!q.empty()){
			int u = q.front();q.pop();
			for(int i=0;i<Adj[u].size();i++){
				int x = Adj[u][i];
				if(dist[x]==-1){
					dist[x]=dist[u]+1;
					if(x==t){
						true;
						break;
					}
					q.push(x);
				}
			}
			if(flag){
				break;
			}
		}
		cout<<"Case "<<++cs<<": "<<dist[t]<<endl;
	}
	return 0;
}