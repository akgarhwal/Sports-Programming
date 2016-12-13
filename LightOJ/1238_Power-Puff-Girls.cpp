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
		int N,M;
		int dr[]={-1,0,1,0};
		int dc[]={0,-1,0,1};
		bool seen[20][20]={false};
		int dist[20][20]={0};
		char grid[20][20];
		int n,m;
		si(n);si(m);
		N=n;M=m;
		int x,y,xa,ya,xb,yb,xc,yc;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>grid[i][j];
				if(grid[i][j]=='h'){
					x=i;y=j;
				}
				if(grid[i][j]=='a'){
					xa=i;ya=j;
				}
				if(grid[i][j]=='b'){
					xb=i;yb=j;
				}
				if(grid[i][j]=='c'){
					xc=i;yc=j;
				}
			}
		}
		queue<int> qfx,qfy;
		qfx.push(x);
		qfy.push(y);
		seen[x][y]=true;
		while(!qfx.empty()){
			int x = qfx.front();qfx.pop();
			int y = qfy.front();qfy.pop();
			for(int i=0;i<4;i++){
				int u = x + dr[i];
				int v = y + dc[i];
				if(u>=0 and u<N and v>=0 and v<M and grid[u][v]!='#' and grid[u][v]!='m' and seen[u][v]==false){
					dist[u][v] = dist[x][y]+1;
					qfx.push(u);
					qfy.push(v);
					seen[u][v]=true;
				}

			}
		}
		// for(int i=0;i<n;i++){
		// 	for(int j=0;j<m;j++){
		// 		cout<<dist[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		int res = max(dist[xa][ya],max(dist[xb][yb],dist[xc][yc]));
		cout<<"Case "<<++cs<<": "<<res<<endl;

	}
	return 0;
}