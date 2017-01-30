/*
	Author      : akgarhwal
	Date        : 19-01-2017 20:34:09
	Description : Lets try B
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
	char ch[4];
	int R=0,G=0,B=0,Y=0;
	for(int i=0; i< sz(s); i++){
		switch(s[i]){
			case 'R':
				ch[i%4] = 'R';
				break;
			case 'G':
				ch[i%4] = 'G';
				break;
			case 'B':
				ch[i%4] = 'B';
				break;
			case 'Y':
				ch[i%4] = 'Y';
				break;
		
		}
	}
	for(int i=0; i< sz(s); i++){
		if(ch[i%4]=='R' and s[i]=='!'){
			R++;
		}
		if(ch[i%4]=='B' and s[i]=='!'){
			B++;
		}
		if(ch[i%4]=='Y' and s[i]=='!'){
			Y++;
		}
		if(ch[i%4]=='G' and s[i]=='!'){
			G++;
		}
	}
	cout<<R<<" "<<B<<" "<<Y<<" "<<G;
	return 0;
}