/*
	Author      : akgarhwal
	Date        : 15-03-2017 20:24:15
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

	int n,x,y;
	cin>>n;
	int mi =1e9+1;
	int mx2 = 0;
	for(int i=0; i< n; i++){
		
		cin>>x>>y;
		mi = min(mi,y);
		mx2 =  max(mx2,x);
	}
	int mx =0;
	int m;
	cin>>m;
	int mi2 = 1e9+1;
	for(int i=0; i< m; i++){
		cin>>x>>y;
		mx = max(mx,x);
		mi2 = min(mi2,y);
	}
	int ans = max(mx-mi , mx2-mi2);
	cout<<(ans < 0 ? 0: ans);
	return 0;
}