/*
	Author      : akgarhwal
	Date        : 13-05-2017 14:59:32
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
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	double n,h;
	cin>>n>>h;
	/* Binary Search Solution O(log(n)) */ 
	// double areaT = (double)h/2.0;

	// double area = areaT / (double)n;

	// for(int i=1; i< n; i++){
		
	// 	double req_area = area*(double)i;

	// 	double lo = 0.0,hi= (double)h;
	// 	double ans = (lo+hi)/2.0;
	// 	while(fabs(lo-hi) >= 1e-8){

	// 		double mid = (lo+hi)/2.0;

	// 		double base = mid / (2.0 * (double)h);

	// 		double temp_area = base*mid;

	// 		if(temp_area <= req_area){
	// 			ans = mid;
	// 			lo = mid;
	// 		}
	// 		else{
	// 			hi = mid;
	// 		}

	// 	}
	// 	printf("%.9f ",ans);

	// }

	



	return 0;
}