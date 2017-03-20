/*
	Author      : akgarhwal
	Date        : 19-03-2017 16:06:58
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

string s[55];

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string t="A";
	for(int i=0; i< 26; i++){
		s[i] = t+(char)(i+97);
	}
	for(int i=26; i< 52; i++){
		s[i] = t+(char)(i-26+97)+(char)(i-26+97);
	}
	int n,k;
	cin>>n>>k;
	string x;
	for(int i=0; i< (n-k+1); i++){
		cin>>x;
		if(x=="NO"){
			s[i+k-1] = s[i];
		}
	}
	for(int i=0; i< n; i++){
		
		cout<<s[i]<<" ";
	}

	return 0;
}
/*

0 ->  Aa
1 ->  Aa


*/