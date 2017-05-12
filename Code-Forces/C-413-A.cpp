/*
	Author      : akgarhwal
	Date        : 11-05-2017 20:48:19
	Description : s
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

	int n,k,t,d;
	cin>>n>>t>>k>>d;

	int ft = (ceil(n/(double)k))*t;
	int dtm = (d/t)*k;
	n = n-dtm;
	int st  = (ceil(n/(double)(2*k)))*t;
	st = st + max(d,(d/t)*t) ;
	if(ft<=st){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
 

	return 0;
}