/*
	Author      : akgarhwal
	Date        : 12-03-2017 18:57:54
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

	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int tot=0;
		for(int i=0; i< n; i++){
			for(int j=0; j< n; j++){
				cin>>x;
				tot+=x;
			}
		}
		int ans=0;
		int z=1;
		tot = tot-n;
		while(tot>0){
			tot -= (2*(n-z));
			z++;
			ans++;
		}
		cout<<ans<<endl;

	}
	return 0;
}