/*
	Author      : akgarhwal
	Date        : 08-04-2017 12:11:26
	Description : https://www.codechef.com/APRIL17/problems/DISHLIFE
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
		int n,k;
		cin>>n>>k;
		vi a(k+1,0);
		bool ans=false;
		for(int i=0; i< n; i++){
			int x;
			cin>>x;
			bool temp = true;
			for(int i=0; i< x; i++){
				int y;
				cin>>y;
				if(a[y]==0){
					 temp = false;
				}
				a[y] = 1;
			}
			if(temp == true){
				ans = true;
			}
		}
		int i=0;
		for(i=1; i<= k; i++){
			if(a[i]==0){
				cout<<"sad\n";
				break;
			}
		}
		if( i > k ){
			if(ans){
				cout<<"some\n";
			}
			else{
				cout<<"all\n";
			}
		}
	}
	return 0;
}	