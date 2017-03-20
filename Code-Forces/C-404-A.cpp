/*
	Author      : akgarhwal
	Date        : 15-03-2017 20:24:04
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

#define endl				"\n"
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
	int n;
	cin>>n;
	string s;
	int ans=0;
	while(n--){
		cin>>s;
		if(s=="Tetrahedron"){
			ans += 4;
		}
		else if(s=="Cube"){
			ans += 6;
		}
		else if(s=="Octahedron"){
			ans += 8;
		}
		else if(s=="Dodecahedron"){
			ans += 12;
		}
		else if(s=="Icosahedron"){
			ans += 20;
		}
	}
	cout<<ans;
	
	return 0;
}