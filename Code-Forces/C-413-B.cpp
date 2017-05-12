/*
	Author      : akgarhwal
	Date        : 12-05-2017 00:31:33
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

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,x;
	cin>>n;
	int p[n];
	map<int, set<int> > mp;
	for(int i=0; i< n; i++){
		cin>>p[i];
	}
	for(int i=0; i< n; i++){
		cin>>x;
		mp[x].insert(p[i]);
	}
	for(int i=0; i< n; i++){
		cin>>x;
		mp[x].insert(p[i]);
	}
	int m;
	cin>>m;
	while(m--){
		cin>>x;
		if(sz(mp[x])){
			auto it = *mp[x].begin();
			cout<<it<<" ";
			mp[1].erase(it);
			mp[2].erase(it);
			mp[3].erase(it);			
		}
		else{
			cout<<-1<<" ";
		}
	}



	return 0;
}