/*
	Author      : akgarhwal
	Date        : 14-04-2017 12:36:12
	Description : WATER on SPOJ 1.DFS from border and then fill water
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

int a[105][105],w[105][105],v[105][105];
int n,m;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void DFS(int x,int y,int h){
	
	v[x][y] = 1;
	w[x][y] = a[x][y];

	for(int k=0; k< 4; k++){
		int nx = x+dx[k];
		int ny = y+dy[k];
		if(nx >=0 and nx < n and ny>=0 and ny < m){

			if(h <= a[nx][ny] and v[nx][ny] == 0){
				DFS(nx,ny,a[nx][ny]);
			}
		}
	}
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		cin>>n>>m;
		//input matrix
		for(int i=0; i< n; i++){
			for(int j=0; j< m; j++){
				cin>>a[i][j];
				v[i][j] = 0;
				w[i][j] = 1e9;
			}
		}

		//border DFS for column
		for(int i=0; i< n; i++){
			if(v[i][0] == 0){
				DFS(i,0,a[i][0]);
			}	
			if(v[i][m-1] == 0){
				DFS(i,m-1,a[i][m-1]);
			}
		}

		//border DFS for rows
		for(int i=0; i< m; i++){
			if(v[0][i] == 0){
				DFS(0,i,a[0][i]);
			}	
			if(v[n-1][i] == 0){
				DFS(n-1,i,a[n-1][i]);
			}
		}

		//infite loop until updation
		while(1){
			bool flag = true;
			for(int i=0; i< n; i++){
				for(int j=0; j< m; j++){
					if(v[i][j] == 0){
						int mi = INT_MAX;
						for(int k=0; k< 4; k++){
							int nx = i+dx[k];
							int ny = j+dy[k];
							mi = min( mi, max(a[nx][ny],w[nx][ny]) );
						}
						if( mi < w[i][j] ){
							w[i][j] = mi;
							flag = false;
						}

					}
				}
			}
			if(flag == true){
				break;
			}
		}

		ll res=0LL;
		for(int i=0; i< n; i++){
			for(int j=0; j< m; j++){
				if(w[i][j] > a[i][j]){
					res += ll(w[i][j]-a[i][j]);
				}
			}
		}
		//rseult
		cout<<res<<endl;



	}
	return 0;
}