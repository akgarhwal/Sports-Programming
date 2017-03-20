/*
	Author      : akgarhwal
	Date        : 18-02-2017 07:51:47
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

	int n;
	cin>>n;
	while(n--){
		bool flag = true;
		string s;
		cin>>s;
		int S = sz(s);
		for(int i=0;i<S;i++){
			ll x=0;
			if(s[0]=='0' and i>=1){
				break;
			}
			for(int j=0; j<= i; j++){
				x = x*10ll+(ll)(s[j]-'0');
			}
			cout<<x<<" "<<i<<endl;
			string t="";
			ll D = x;
			while(sz(t) < sz(s)){
				stringstream ss;
				
				ss<<x;
				string z;
				ss>>z;
				t += z;
				x++;
			}
			cout<<t<<" "<<endl;
			if(t==s){
				flag = false;
				cout<<"YES "<<D<<endl;
				break;
			}

		}
		if(flag)
			cout<<"NO\n";

	}
	return 0;
}