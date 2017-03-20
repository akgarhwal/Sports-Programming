/*
	Author      : akgarhwal
	Date        : 03-02-2017 13:05:37
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
	vector<ii> v;
	for(int i=0; i< n-1; i++){
		int x,y;
		cin>>x>>y;
		v.pb(make_pair(x,y));
	}
	vi c(n+1,0);
	for(int i=0; i< n; i++){
		cin>>c[i+1];
	}
	int ans=0;
	vi Count(n+1,0);
	for(int i=0; i< n-1; i++){
		int x =v[i].first,y = v[i].second;
		if(c[x]!=c[y]){
			ans++;
			Count[x]++;
			Count[y]++;
		} 
	}
	for(int i=1; i<=n ; i++){
		if(ans==Count[i]){
			cout<<"YES\n"<<i;
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}