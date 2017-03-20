/*
	Author      : akgarhwal
	Date        : 20-02-2017 20:58:18
	Description : lets do it
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
	vector<ll> a(n,0);
	ll mi = 1e9,mx = -1;
	for(int i=0; i< n; i++){
		cin>>a[i];
		mi =min(mi,a[i]);
		mx =  max(mx,a[i]);
	}
	int co=0;
	for(int i=0; i< n; i++){
		if(a[i]>mi and a[i]<mx){
			co++;
		}
	}
	cout<<co<<endl;
	return 0;
}