/*
	Author      : akgarhwal
	Date        : 15-04-2017 21:13:33
	Description : Euler path 
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

vector<int> Adj[26];

void DFS(int u){
	for(int i=0; i< Adj[u].size(); i++){
		int v = Adj[u][i];
		auto it = find(Adj[u].begin(), Adj[u].end(), v);
		Adj[u].erase(it);
		DFS(v);
	}
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		string s;
		unordered_map<char,int> mp1,mp2;
		
		for(int i=0; i< 26; i++){
			Adj[i].clear();
		}

		for(int i=0; i< n; i++){
			cin>>s;
			mp1[s[0]]++;
			mp2[s[sz(s)-1]]++;
			int u = s[0] - 'a',v = s[sz(s)-1]-'a';
			Adj[u].pb(v);
		}

		// for(int i=0; i< 26; i++){
		// 	cout<<"\n"<<i<<" :: ";
		// 	for(int j=0; j< Adj[i].size(); j++){
		// 		cout<<Adj[i][j]<<" ";
		// 	}

		// }

		int ans = 0;
		int fl =0;
		int st = -1;
		for(char ch='a'; ch<='z' ; ch++){
			if(abs(mp1[ch] - mp2[ch]) == 1 ){
				ans++;
				if(st  ==-1 and Adj[ch-'a'].size()>=1)
					st = ch -'a';
			}
			else if(abs(mp1[ch] - mp2[ch]) != 0) {
				fl =1;
			}
			
		}

		if(st == -1){
			for(int i=0; i< 26; i++){
				if(st == -1 and Adj[i].size() >= 1 ){
					st = i;
					break;
				}
			}
		}
			

		DFS(st);
		bool flag = true;
		for(int i=0; i< 26; i++){
			if(Adj[i].size() != 0){
				flag = false;
				break;
			}
		}

		// for(int i=0; i< 26; i++){
		// 	cout<<"\n"<<i<<" :: ";
		// 	for(int j=0; j< Adj[i].size(); j++){
		// 		cout<<Adj[i][j]<<" ";
		// 	}

		// }

		
		if(ans == 0 and fl ==0 and flag == true){
			cout<<"Ordering is possible.\n";
		}
		else if(ans == 2 and fl == 0 and flag == true){
			cout<<"Ordering is possible.\n";
		}
		else{
			cout<<"The door cannot be opened.\n";
		}
	}
	
	return 0;
}