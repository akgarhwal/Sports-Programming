/*
	Author      : akgarhwal
	Date        : 17-01-2017 21:02:00
	Description : Dollar
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

	int n,b;
	cin>>n>>b;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int res=b;
	for(int i=0; i< n; i++){
		int x = b/a[i];
		for(int j=i+1; j< n; j++){
			if(a[j]>a[i]){
				res = max(res,x*a[j]+(b%a[i]));
			}
		}
	}
	cout<<res<<endl;
	return 0;
}