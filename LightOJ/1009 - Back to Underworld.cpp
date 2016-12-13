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

int main(){
	int tc;
	si(tc);
	int cs=0;
	while(tc--){
		int n;
		si(n);
		vector<int> Color(20005,-1);
		vector<int> Adj[100005];
		vector<bool> check(20005,false);
		for(int i=0;i<n;i++){
			int x,y;
			si(x);si(y);
			Adj[x].push_back(y);
			Adj[y].push_back(x);
			check[x]=true;
			check[y]=true;
		}
		int ans=0,ans1=0,res=0;
		for(int i=1;i<=20000;i++){
			if(check[i]==true and Color[i]==-1){
				int u=i;
				ans=1;ans1=0;
				Color[u]=0;
				queue<int> q;
				q.push(u);
				while(!q.empty()){
					int x = q.front();q.pop();
					for(int j=0;j<Adj[x].size();j++){
						int v = Adj[x][j];
						if(Color[v]==-1){
							Color[v] = 1 - Color[x];
							if(Color[v]==0){
								ans++;
							}
							else{
								ans1++;
							}
							q.push(v);
						}
					}
				}
				res += max(ans,ans1);
			}
		}
		
		// for(int i=1;i<=20000;i++){
		// 	if(Color[i]!=-1){
		// 		if(Color[i]==0){
		// 			ans++;
		// 		}
		// 		else{
		// 			ans1++;
		// 		}
		// 	}
		// }
		cout<<"Case "<<++cs<<": "<<res<<endl;
	}
	return 0;
}