/*
	Author      : akgarhwal
	Date        : 01-05-2018 19:48:51
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

	int a[15];
	for(int i=0; i<14; i++){
		cin>>a[i];
	}
	ll mx = 0;
	for(int i=0; i<14; i++){
		ll temp = 0;
		int b[15];
		for(int k=0; k< 14; k++){
			b[k] = a[k];
		}

		int co = b[i];
		b[i] = 0;

		if (co > 0) {

			int cur = i+1;
			int rem = co % 14;
			for(int j=0; j< 14; j++){
					
					b[cur%14] = b[cur%14] + co / 14 + (rem >0 ? 1:0);
					rem -= 1;
					cur += 1;
			}

		}
		for(int i=0; i< 14; i++){
			//cout<<b[i]<<" ";
			if (b[i]%2 == 0){
				temp += b[i];
			}
		}
		//cout<<endl;
		mx = max(mx,temp);

	}
	cout<<mx;


	return 0;
}
