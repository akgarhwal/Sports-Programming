/*
	Author      : akgarhwal
	Date        : 08-04-2017 22:42:04
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
	int t=0;
	while(tc--){
		int k=0;
		string s="";
		cin>>s>>k;
		int ans=0;
		for(int i=0; i<= sz(s)-k; i++){
			if(s[i] == '-'){
				for(int j=i; j<(i+k) ; j++){
					if(s[j] == '-'){
						s[j] = '+';
					}
					else{
						s[j] = '-';
					}
				}
				ans++;
			}
		}
		for(int i = sz(s)-k;i<sz(s);i++){
			if(s[i] == '-'){
				ans =-1;
				break;
			}
		}
		t++;
		if(ans == -1){
			cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
		}
		else
			cout<<"Case #"<<t<<": "<<ans<<endl;
	}
	return 0;
}