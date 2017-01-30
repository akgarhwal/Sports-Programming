/*
	Author      : akgarhwal
	Date        : 26-01-2017 06:09:20
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

	string s;
	cin>>s;
	bool A = false;
	int md=330,ca=0,last=-2;
	for(int i=0; i< sz(s); i++){
		if(s[i]=='@'){
			A = true;
			ca++;
			md = min(md,i-last);
			last=i;

		}
	}
	

	bool f=true;
	if(md<=2 or s[sz(s)-1]=='@' or A==false){
		cout<<"No solution";
	}
	else{
		last=0;
		for(int i=0; i< sz(s); i++){
			if(s[i]=='@'){
				if(f){
					cout<<s.substr(last,i+1-last+1);
					f=false;
				}
				else{
					cout<<","<<s.substr(last,i+1-last+1);
				}
				
				last=i+2;
			}
		}
		cout<<s.substr(last,sz(s)-last);
	}
	return 0;
}