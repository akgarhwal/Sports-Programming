/*
	Author      : akgarhwal
	Date        : 06-05-2018 19:11:54
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

	int n,k;
	cin>>n>>k;
	vector<int> a(n,0);
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int x = -1;
	sort(all(a));
	if (k == 0 and a[0] > 1){
		cout<<1<<endl;
	}
	else if (k == n ){
		cout<<a[n-1]<<endl;
	}
	else if ( k< n and k > 0 and a[k] != a[k-1] ) {
		cout<<a[k-1]<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}