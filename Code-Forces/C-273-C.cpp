/*
	Author      : akgarhwal
	Date        : 03-02-2017 10:47:42
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

	ll a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(2*(a[0]+a[1]) <= a[2]){
		cout<<a[0]+a[1];
	}
	else{
		cout<<(a[0]+a[1]+a[2])/3;
	}
	return 0;
}