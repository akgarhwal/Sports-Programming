/*
	Author      : akgarhwal
	Date        : 08-04-2017 12:05:38
	Description : https://www.codechef.com/APRIL17/problems/SIMDISH
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
		set<string> st;
		string s;
		for(int i=0; i< 8; i++){
			cin>>s;
			st.insert(s);
		}
		if(sz(st)<=6){
			cout<<"similar\n";
		}
		else{
			cout<<"dissimilar\n";
		}
	}
	return 0;
}