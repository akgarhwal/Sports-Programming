/*
	Author      : akgarhwal
	Date        : 06-02-2017 17:56:58
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

	int tc;
	cin>>tc;
	while(tc--){
		ll n;
		cin>>n;
		vector<ll> v(n,0);
		int zc=0,oc=0;
		for(int i=0; i< n; i++){
			cin>>v[i];
			if(v[i]){
				oc++;
			}
		}
		vector<int> zero(n,0);
		for(int i=n-2; i>=0 ; i--){
			if(v[i]){

			}
			else {
				if(v[i+1]==0){
					zero[i]  = zero[i+1]+1;
				}
				else{
					zero[i] = 0;
				}
			}	
		}
		vector<int> one(n,0);
		for(int i=1; i< n; i++){
			if(v[i]){
				if(v[i-1]){
					one[i] = one[i-1]+1;
				}
			}
		}
		for(int i=0; i< n; i++){
			cout<<zero[i]<<" ";
		}
		cout<<endl;
		for(int i=0; i< n; i++){
			cout<<one[i]<<" ";
		}

		for(int i=0; i< n; i++){
			
		}

	}
	return 0;
}