/*
	Author      : akgarhwal
	Date        : 11-04-2017 11:56:47
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<ll> 		vi; 
typedef pair<ll,ll> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		
		ll n,k,x,m,s;
		cin>>n>>k>>x>>m>>s;
		vector<ii> Adj[n+1];
		

	
		for(int i=0; i< m; i++){
			ll x,y,w;
			cin>>x>>y>>w;
			Adj[x].pb({y,w});
			Adj[y].pb({x,w});

		}
		
	    queue<int> Q;
	    Q.push(s);
	    vi dist(n+1,2e18);
	    dist[s]=0;
		if(s<=k){
			
			for(int i=1; i<=k ; i++){
				dist[i] = min(dist[i],dist[s]+x);
				
	    		Q.push(i);
			}
		}

	    bool fl =true;
	  
	    while(!(Q.empty())){

	    	int u = Q.front();Q.pop();
	    	
	    	for(int i=0; i< sz(Adj[u]); i++){
	    		ii X = Adj[u][i];

	    		ll v = X.first,w = X.second;

	    		if(dist[v] > dist[u]+w){
	    			dist[v] = dist[u]+w;
	    			Q.push(v);
	    		}	

	    		if(v<=k and fl){
	    			fl = false;
	    			for(int i=1; i<=k ; i++){
	    				dist[i] = min(dist[i],dist[v]+x);
	    				
	    				Q.push(i); 
	    			}
	    		}

	    		
	    	}
	    }
	   	

	    ll mi = 2e18;

	    for(int i=1; i<= k; i++){
	    	mi = min(mi,dist[i]);
	    }
	    for(int i=1; i<= k; i++){
	    	dist[i] = min(dist[i],mi+x);
	    }

	 //    queue<int> Q1;
	 //    Q1.push(s);
	    
	 //   	if(s<=k){
			
		// 	for(int i=1; i<=k ; i++){
		// 		dist[i] = min(dist[i],dist[s]+x);
		// 		if( i != s)
		// 			Q1.push(i); 
		// 	}
		// }


	 //    fl  =true;
	 //    while(!(Q1.empty())){

	 //    	int u = Q1.front();Q1.pop();
	 //    	//visit[u]=1;
	 //    	for(int i=0; i< sz(Adj[u]); i++){
	 //    		ii X = Adj[u][i];

	 //    		ll v = X.first,w = X.second;

	 //    		if(v<=k and fl){
	 //    			fl = false;
	 //    			for(int i=1; i<=k ; i++){
	 //    				dist[i] = min(dist[i],dist[v]+x);
	 //    				if( i != v)
	 //    					Q1.push(i); 
	 //    			}
	 //    		}

	 //    		if(dist[v] >= dist[u]+w){

	 //    			dist[v] = dist[u]+w;
	 //    			Q1.push(v);

	 //    		}
	    		
	 //    	}
	 //    }

	    for(int i=0; i< n; i++){
	    	cout << dist[i+1] << " " ;
	    }
	    cout<<endl;

	}
	return 0;
}
