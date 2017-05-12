/*
	Author      : akgarhwal
	Date        : 05-05-2017 16:34:42
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

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vi v(2*n,0);
		for(int i=0; i< 2*n; i++){
			cin>>v[i];
		}
		sort(all(v));
		int ans=v[n+n/2];
		cout<<ans<<endl;
		for(int i=0; i< n; i++){
			cout<<v[i]<<" "<<v[i+n]<<" ";
		}
		cout<<endl;

	}
	return 0;
}