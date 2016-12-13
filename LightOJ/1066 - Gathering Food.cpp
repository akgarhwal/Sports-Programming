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
	int tc,cs=0;
	si(tc);
	while(tc--){
		int n,k=0,X,Y;
		si(n);
		char grid[n][n];
		int seen[11][11];
		int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>grid[i][j];
				seen[i][j]=0;
				if(grid[i][j]!='.' and grid[i][j]!='#'){
					k++;
					//cout<<i<<" "<<j<<endl;
				}
				if(grid[i][j]=='A'){
					X=i;Y=j;
				}
			}
		}
		if(k==1){
			cout<<"Case "<<++cs<<": "<<0<<endl;
			continue;
		}
		char ch1='A',ch2='B';
		//cout<<k<<endl;
		int res=0;
		bool fl;
		for(int z=1;z<k;z++){
			int dist[11][11]={0};
			int time=0;
			ch1 = char(64+z);
			ch2 = char(65+z);
			//cout<<ch2<<endl;
			queue<int> qfx,qfy;
	        qfx.push(X);
	        qfy.push(Y);
	        seen[X][Y]=z;
	        fl=false;
	        while(!qfx.empty()){
	            int x = qfx.front();qfx.pop();
	            int y = qfy.front();qfy.pop();
	            for(int i=0;i<4;i++){
	                int u = x + dr[i];
	                int v = y + dc[i];
	                if(u>=0 and u<n and v>=0 and v<n and  ch2>=(grid[u][v]) and grid[u][v]!='#' and seen[u][v]!=z){
	                    dist[u][v] = dist[x][y]+1;
	                    if(grid[u][v]==ch2){
	                    	res+=dist[u][v];
	                    	X=u;Y=v;
	                    	//cout<<"OK\n";
	                    	//cout<<res<<endl;
	                    	fl=true;
	                    	break;
	                    }
	                    qfx.push(u);
	                    qfy.push(v);
	                    seen[u][v]=z;
	                }
	 
	            }
	            if(fl){

	            	break;

	            }
	        }
	        if(!fl){
	        	res=-1;
	     		break;
	        }

		}
		if(fl)
			cout<<"Case "<<++cs<<": "<<res<<endl;
		else
			cout<<"Case "<<++cs<<": "<<"Impossible\n";
	}
	return 0;
}