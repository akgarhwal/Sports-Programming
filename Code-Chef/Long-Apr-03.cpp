	/*
		Author      : akgarhwal
		Date        : 08-04-2017 11:21:56
		Description : https://www.codechef.com/APRIL17/problems/ROWSOLD
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
			ll res=0;
			int last=0;
			int zero = 0;
			for(int i=sz(s)-1; i>=0 ; i--){
				if(s[i]=='1'){
					last = zero==0?(last):(last+zero+1);
					res += last;
					zero=0;
				}
				else{
					zero++;
				}
			}
			cout<<res<<endl;
		}
		return 0;
	}