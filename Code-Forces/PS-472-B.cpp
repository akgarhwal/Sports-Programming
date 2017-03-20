/*
	Author      : akgarhwal
	Date        : 21-02-2017 08:30:30
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

	int n,k;
	cin>>n>>k;
	vi a(n,0);
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	ll tot=0;
	sort(all(a));
	int x = n-1;
	while(x>=0){
		tot += (2*(a[x]-1));
		x = x-k;
	}
	cout<<tot;
	return 0;
}