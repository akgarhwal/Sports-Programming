/*
	Author      : akgarhwal
	Date        : 15-01-2017 23:10:46
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<bool> visit(10001,false);
vector<int> adj[10000+1];
void dfs(int n){
	visit[n]=true;
	for(int i=0; i< adj[n].size(); i++){
		if(!(visit[adj[n][i]])){
			dfs(adj[n][i]);
		}
	}
}



int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,x;
	cin>>n;

	int a=0;
	
	for(int i=1; i<= n; i++){
		int x;
		cin>>x;
		adj[x].push_back(i);
		adj[i].push_back(x);
	}
	int ans=0;
	for(int i=1; i<= n; i++){
		if(!(visit[i])){
			dfs(i);
			ans++;
		}
	}
	cout<<ans<<endl;

		
	return 0;
}