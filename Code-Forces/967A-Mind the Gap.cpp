/*
	Author      : akgarhwal
	Date        : 29-04-2018 18:48:28
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
	int n,s;
	cin>>n>>s;
	vi time;
	int h,m;
	while (n--) {
		cin>>h>>m;
		time.push_back(h*60+m);
		//cout<<(h*60+m)<<endl;
	}
	int diff = 2*s+1;
	int start = 0;
	if (time[0] >= s+1) {
		cout<<"0 0"<<endl;
		return 0;
	}	

	for(int i=0; i< sz(time); i++){
		if (time[i] - start > diff)  {
			start += s+1;
			cout<<start/60 <<" "<<start%60<<endl;
			return 0;
		}
		start = time[i];
	}
	start = start+s+1;
	cout<<start/60 <<" "<<start%60<<endl;
	
	return 0;
}
