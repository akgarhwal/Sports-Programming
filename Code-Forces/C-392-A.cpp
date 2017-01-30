/*
	Author      : akgarhwal
	Date        : 19-01-2017 20:33:02
	Description : Lets try
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
	ll a[n];
	ll d[n],mx=-1;
	for(int i=0; i< n; i++){
		cin>>a[i];
		mx =max(mx,a[i]);
	}
	ll sum=0;
	for(int i=0; i< n; i++){
		d[i] = abs(a[i]-mx);
		sum += d[i];
	}
	cout<<sum;

	return 0;
}