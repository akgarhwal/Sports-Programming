/*
	Author      : akgarhwal
	Date        : 30-05-2017 19:45:20
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long	ll;
typedef vector<int>	vi;
typedef pair<int,int>	pi;
#define F		first
#define S		second
#define PB		push_back
#define MP		make_pair
#define sz(a)		int((a).size())
#define all(c)		(c).begin(),(c).end()
#define REP(i,a,b)	for(int i = a; i < b; i++)
#define tr(c,i)		for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)	((c).find(x) != (c).end())
#define cpresent(c,x)	(find(all(c),x) != (c).end())
#define MOD		1000000007 	/* 10^9+7*/


int main(){

	ll a[1000001];
	for(int i=0; i< 1000001; i++){
		a[i]=(ll)i;
	}
	for(int i=2; i< 1000001; i++){
		
		if(a[i]==i){
			a[i]--;
			for(int j=i+i; j< 1000001; j+=i){
				
				a[j] = (a[j] *1LL* (i-1LL))/(ll)i;

			}
		}

	}
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		cout<<a[n]<<"\n";
	}
	
	return 0;
}