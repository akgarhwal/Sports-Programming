/*
	Author      : akgarhwal
	Date        : 16-04-2017 10:06:14
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

	int t;
	cin>>t;
	int tc=1;
	while(t--){
		int n;
		cin>>n;
		int x= 0 ;
		int a[n];
		for(int i=0; i< n; i++){
			cin>>a[i];
		}
		for(int i=0; i< n; i++){
			if(a[i] != i+1){
				int z = 0;
				for(int k=0; k< n; k++){
					if( k != i and a[k]==i+1){
						z = k;
						break;
					}
				}
				swap(a[i],a[z]);
				x++;
			}
		}
		cout<<"Case "<<tc++<<": "<<x<<endl;
	}
	return 0;
}