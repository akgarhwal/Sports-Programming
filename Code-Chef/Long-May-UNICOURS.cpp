/*
	Author      : akgarhwal
	Date        : 05-05-2017 16:24:12
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
		int ans=0;
		cin>>n;
		for(int i=0; i< n; i++){
			int x;
			cin>>x;
			ans = min(ans,n-x);
		}
		cout<<ans<<endl;
	}

	return 0;
}