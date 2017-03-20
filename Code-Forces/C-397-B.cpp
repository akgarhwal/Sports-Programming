/*
	Author      : akgarhwal
	Date        : 14-02-2017 18:41:33
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
	char mx = 'a';
	string ans="YES";
	for(int i=0; i< sz(s); i++){
		if(s[i]>mx){
			ans = "NO";
			break;
		}
		else if(s[i]==mx){
			mx++;
		}
	}
	cout<<ans<<endl;
}