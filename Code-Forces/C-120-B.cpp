/*
	Author      : akgarhwal
	Date        : 15-01-2017 14:28:38
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	double x,y,r,X,Y,R;
	cin>>x>>y>>r>>X>>Y>>R;
	double dist = sqrt(((X-x)*(X-x))+((Y-y)*(Y-y)));
	//dist -= (r+R);
	//cout<<dist<<endl;
	if(r>R){
		swap(r,R);
	}
	if(dist > (r+R)){
		dist -= (r+R); 
	}
	else if(R >= dist+r){
		dist = R-r-dist;
	}
	else{
		dist=0;
	}
	printf("%.10lf",dist/2.0); 
	return 0;
}	