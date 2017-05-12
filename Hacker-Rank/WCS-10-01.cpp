/*
	Author      : akgarhwal
	Date        : 28-04-2017 21:28:41
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
	vi a(n,0);
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	vi inc;

	int p =0;
	for(int i=1; i< n; i++){
	 	if(a[i]>a[i-1]){
	 		p++;
	 	}
	 	else{
	 		if(p)
	 			inc.pb(p);
	 		p=0;
	 	}
	 } 
	p =0;
	for(int i=1; i< n; i++){
	 	if(a[i]<a[i-1]){
	 		p++;
	 	}
	 	else{
	 		if(p)
	 			inc.pb(p);
	 		p=0;
	 	}
	 } 
	 int res=0;
	 for(int i=0; i< sz(inc); i++){
	 	if(inc[i]>=3)
	 		res += inc[i]-2;
	 }
	 cout<<res<<endl;
	
	return 0;
}