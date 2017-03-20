/*
	Author      : akgarhwal
	Date        : 26-02-2017 13:51:11
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int k;
	string s;
	cin>>s>>k;
	int count=0;

	int z=0;
	for(int i=0; i< sz(s); i++){
			if(s[i] == '0'){
				z++;
			}
	}
	if(z<k){
		if(z){
			cout<<sz(s)-1<<endl;
		}
		else{
			cout<<sz(s)<<endl;
		}
	}
	else{
		z=0;
		for(int i=sz(s)-1; i>=0 ; i--){
			//cout<<s[i]<<" ";
			if(s[i]=='0'){
				z++;
			}
			if(z==k){
				break;
			}
			if(s[i]!='0'){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}