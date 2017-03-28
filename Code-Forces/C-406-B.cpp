/*
	Author      : akgarhwal
	Date        : 23-03-2017 21:06:58
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

	int n,m;
	cin>>n>>m;
	
	while(m--){
		int k;
		cin>>k;
		bool ans = false;
		unordered_map<int, int> mp;
		for(int i=0; i< k; i++){
			int x;
			cin>>x;
			if(mp[-x]==1){
				ans = true;
			}
			mp[x]=1;
		}
		if(ans==false){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}