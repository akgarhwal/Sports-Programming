/*
	Author      : akgarhwal
	Date        : 21-03-2017 12:16:58
	Description : 
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

bool isPrime(long long n){
	if(n<=1ll) return false;
	if(n<=3ll) return true;
	if(!((n%2ll) and (n%3ll))) return false;
	ll LIM = ceil(sqrt(n)+1e-7);
	for(ll i=5ll;i<=LIM;i+=6ll){
		if(!((n%i) and (n%(i+2ll))))	return false;
	}
	return true;
}


vi Adj[10000];
set<int> sp;

bool differByOne(int n,int i){
	stringstream ss;
	ss<<n;
	string N;
	ss>>N;
	ss.clear();
	ss<<i;
	string I;
	ss>>I;
	bool fl = false;
	for(int i=0; i< 4; i++){
		if(N[i] != I[i] and fl == true){
			return false;
		}
		else if(N[i] != I[i]){
			fl = true;
		}
	}
	return true;
}

int BFS(int f,int l){
	vi dist(10000,-1);
	dist[f]=0;
	queue<int> q;
	q.push(f);
	while(!(q.empty())){
		int u = q.front();q.pop();
		for(int i=0; i< Adj[u].size(); i++){
			int v = Adj[u][i];
			if(v == l){
				return dist[u]+1;
			}
			if(dist[v] == -1){
				dist[v] = dist[u]+1;
				q.push(v);
			}
		}
	}
	return -1;
}



int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	for(int i=1000; i<=9999 ; i++){
		if( isPrime(i) ){
			for(auto n : sp){
				if(differByOne(n,i)){
					Adj[i].pb(n);
					Adj[n].pb(i);
				}
			}
			sp.insert(i);
		}
	}

	int n;
	cin>>n;
	while(n--){
		int f,l;
		cin>>f>>l;
		if(f == l){
			cout<<0<<endl;
		}
		else{
			int ans = BFS(f,l);
			if(ans == -1){
				cout << "Impossible" << endl ;
			}	
			else{
				cout<<ans<<endl;
			}
		}
	}
	
	return 0;
}