/*
	Author      : akgarhwal
	Date        : 21-02-2017 15:29:17
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
	string x,y;
	vector<pair<string,string> > v;
	for(int i=0; i< n; i++){
		cin>>x>>y;
		v.pb({x,y});
	}
	int z;
	string last="";
	cin>>z;
	if(v[z-1].first < v[z-1].second){
		last = v[z-1].first;
	}
	else{
		last = v[z-1].second;
	}
	for(int i=1; i< n; i++){
		//cout<<last<<" ";
		cin>>z;
		x = v[z-1].first;y = v[z-1].second;
		if(x<y and x>last){
			last = x;
		}
		else if(y>last){
			last =y;
		}
		else if(x>y and x>last){
			last = x;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES\n";

	return 0;
}