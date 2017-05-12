/*
	Author      : akgarhwal
	Date        : 07-05-2017 21:01:29
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
	vector<ii> v;
	for(int i=0; i< n; i++){
		cin>>x>>y;
		v.pb({x,y});
		if(x!= y){
			cout<<"rated";
			return 0;
		}
	}
	bool ans = true;
	for(int i=1; i< sz(v); i++){
			if(v[i-1].first < v[i].first){
				ans = false;
				break;
			}
	}
	if(ans == false)
		cout<<"unrated\n";
	else{
		cout<<"maybe\n";
	}

	
	return 0;
}