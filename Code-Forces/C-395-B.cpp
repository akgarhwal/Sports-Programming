/*
	Author      : akgarhwal
	Date        : 02-02-2017 18:51:51
	Description : lets try
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
	vector<ll> v(n,0);
	for(int i=0; i< n; i++){
		cin>>v[i];
	}
	bool f = true;
	int x=0,y=n-1;
	while(x<y){
		swap(v[x],v[y]);
		x++;x++;
		y-=2;
	}
	for(int i=0; i< n; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}