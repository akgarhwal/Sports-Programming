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

char grid[500][500];
int seen[500][500];
int ans[500][500];
//dfs
int cal=0;
int M,N;
int dr[]={-1,0,1,0};
int dc[]={0,-1,0,1};
void dfs(int x,int y,int X){
	if(grid[x][y]=='C'){
		cal++;
	}
	seen[x][y]=X;
	for(int i=0;i<4;i++){
		int u = x+dr[i];
		int v = y+dc[i];
		if(u>=0 and u<M and v>=0 and v<N and seen[u][v]!=X and grid[u][v]!='#'){
			dfs(u,v,X);
		}
	}
}
int main(){
	int tc,cs=1;
	si(tc);
	while(tc--){
		cout<<"Case "<<cs++<<":\n";
		cal=0;
		int n,m,q;
		si(m);si(n);si(q);
		M=m;
		N=n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>grid[i][j];
				ans[i][j]=-1;
				seen[i][j]=-1;
			}
		}
		int X=1;
		vector<int> vect;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(seen[i][j]==-1 and grid[i][j]!='#'){
					//cout<<"First\n";
					dfs(i,j,X);
					vect.push_back(cal);
					cal=0;
					X++;
				}
				//cout<<seen[i][j]<<" ";
			}
			//cout<<endl;
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(seen[i][j]!=-1)
					ans[i][j] = vect[seen[i][j]-1];
			}
		}
		while(q--){
			int x,y;
			si(x);si(y);
			if(ans[x-1][y-1]==-1){
				cout<<0<<endl;
			}
			else{
				cout<<ans[x-1][y-1]<<endl;
			}
		}
	}
	return 0;
}