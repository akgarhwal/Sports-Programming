/*
	Author      : akgarhwal
	Date        : 08-04-2017 12:39:31
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

string isSorted(string s){

	for(int x=0; x< 20; x++){
	
		bool isSort = true;
		for(int i=0; i< sz(s)-1; i++){
			if(s[i] > s[i+1] ){
				s[i] = int(s[i])-1;
				for(int j=i+1; j< sz(s); j++){
					s[j] = '9';
				}
				isSort =false;
				break;
			}
		}
		//cout<<" ## "<<s<<endl;
		if(isSort){
			break;
		}
	}
//	cout<<"RET ## "<<s<<endl;
	return s;
}

ll conTOLong(string s){
	ll res=0ll;
	for(int i=0; i< sz(s); i++){
		res = res * 10LL + (ll(s[i]-'0'));
	}
	return res;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	int t=1;
	while(t<=tc){
		string s;
		cin>>s;
		s = isSorted(s);
		ll ans = conTOLong(s);
		cout<<"Case #"<<t<<": "<<ans<<endl;
		t++;
	}
	return 0;
}