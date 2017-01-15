/*
	Author      : akgarhwal
	Date        : 14-01-2017 19:37:44
	Description : Runnng student
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,vb,vs;
	cin>>n>>vb>>vs;
	double ans=0,mid=1e9;
	int x[n];
	for(int i=0; i< n; i++){
		cin>>x[i];
	}
	ll xs,ys;

	cin>>xs>>ys;
	for(int i=0; i< n; i++){
		ll X = x[i];
		double dist = sqrt(((X-xs)*(X-xs))+(ys*ys));
		cout<<dist<<"  ->  ";
		double time  = (double)X/vb + dist/vs;
		if(time<=mid){
			ans=i+1;
			mid = time;
		} 
		cout<<time<<"     ";

	}
	if(ans==1){
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}