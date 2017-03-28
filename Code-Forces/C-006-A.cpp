	/*
		Author      : akgarhwal
		Date        : 23-03-2017 12:52:56
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

		int a[4];
		for(int i=0; i< 4; i++){
			cin>>a[i];
		}
		sort(a,a+4);
		bool ans=false;
		for(int i=0; i<=1; i++){
			int p,q,r;
			p = a[i],q = a[i+1],r= a[i+2];
			if(p+q > r and q+r > p and p+r > q){
				cout<<"TRIANGLE";
				return 0;
			}
			if(p+q == r or p+r == q  or q+r == p){
				ans = true;
			}
		}
		if(ans){
			cout<<"SEGMENT\n";
		}
		else{
			cout<<"IMPOSSIBLE";
		}

		return 0;
	}