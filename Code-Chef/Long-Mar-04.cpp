/*
	Author      : akgarhwal
	Date        : 12-03-2017 19:03:59
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	int a[n][n];
	for(int i=0; i< n; i++){
		for(int j=0; j< n; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i< n; i++){
		for(int j=0; j< n; j++){
			a[i][j] = a[j][i];
		}
	}
	for(int i=0; i< n; i++){
		sort(a[i],a[i]+n);
	}
	for(int i=0; i< n; i++){
		for(int j=0; j< n; j++){
			a[i][j] = a[j][i];
		}
	}
	for(int i=0; i< n; i++){
		for(int j=0; j< n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}