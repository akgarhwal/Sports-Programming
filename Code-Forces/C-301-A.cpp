/*
	Author      : akgarhwal
	Date        : 25-03-2017 15:04:58
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

	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	int ans=0;
	for(int i=0; i< n; i++){
		ans += min(abs(s[i]-t[i])+1,(abs(10 - abs(s[i]-t[i]))+1));
		//cout<<min(abs(s[i]-t[i]),(abs(10 - abs(s[i]-t[i]))+1))<<endl;
	}
	cout<<ans-n;

	return 0;
}