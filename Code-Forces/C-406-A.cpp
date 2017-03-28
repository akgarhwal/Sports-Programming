/*
	Author      : akgarhwal
	Date        : 23-03-2017 20:36:46
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

bool a1[100001]={false};


bool a2[100001]={false};
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll A=1;
	ll stA = b;
	ll stB = d;
	while( A <= 100000){
		a1[stA]=true;
		a2[stB]=true;
		stA = A*a+b;
		stB = A*c+d;
		A++;
		if(stA > 1e5 or stB > 1e5){
			break;
		}
	}
	for(int i=1; i<100001 ; i++){
		if(a1[i] and a2[i]){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}