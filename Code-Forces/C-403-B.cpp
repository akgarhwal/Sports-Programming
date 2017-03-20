/*
	Author      : akgarhwal
	Date        : 09-03-2017 10:33:08
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

vector<double> a(60000),b(60000);
int n;
bool isOK(double t){
	double L=1e9,R=-1e9;
	for(int i=0; i< n; i++){
		L = min(L,a[i]+b[i]*t);
		R = max(R,a[i]-b[i]*t);
	}
	return L>=R;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	cin>>n;
	
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	for(int i=0; i< n; i++){
		cin>>b[i];
	}
	double f=0,l=1e9;
	int x=0;
	while(x++ < 100){
		double mid = (f+l)/2.0; 
		if(isOK(mid)){
			l = mid;
		}
		else{
			f = mid;
		}
	}
	printf("%.9lf",(f+l)/2.0);

	
	return 0;
}