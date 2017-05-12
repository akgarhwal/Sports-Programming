/*
	Author      : akgarhwal
	Date        : 02-05-2017 20:26:48
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
		
		string s;
		cin>>s;
		string ans = "yes";
		for(int i=1; i< sz(s); i++){
			if(s[i-1] > s[i]){
				ans = "no";
				break;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}