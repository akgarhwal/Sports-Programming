/*
	Author      : akgarhwal
	Date        : 31-01-2017 14:45:45
	Description : Number of Way
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
	ll S=0;
	for(int i=0; i< n; i++){
		cin>>a[i];
		S +=  a[i];
	}
	if(S%3!=0){
		cout<<"0";
	}
	else{
		ll sum = S/3;
		ll temp=0;
		int count[n]={0};
		for(int i=n-1; i>=0; i--){
			temp  += a[i];
			if(temp==sum){
				count[i]+=1;
			}
		}
		for(int i=n-2; i>=0; i--){
			count[i] = count[i]+count[i+1];
		}
		temp=0;
		ll res=0;
		for(int i=0; i<n-2; i++){
			temp+=a[i];
			if(temp==sum){
				res += count[i+2];
			}
		}
		cout<<res;
	}
	return 0;
}