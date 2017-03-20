/*
	Author      : akgarhwal
	Date        : 18-03-2017 21:02:28
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
	int x,y;
	cin>>x>>y;
	int ans=0;
	while(x<=y){
		x = x*3;
		y = y*2;
		ans++;
	}	
	cout<<ans<<endl;
	
	return 0;
}