/*
	Author      : akgarhwal
	Date        : 08-01-2017 12:03:14
	Description : Non Square Equation
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPerfect(ll a){
	ll sq = (ll)sqrt(a);
	if(sq*sq == a){
		return true;
	}
	return false;
}

int sumD(ll n){
 	int res = 0;
 	while(n){
 		res += n%10;;
 		n =n/10;
 	}
 	return res;
}

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	
	ll N,sd=0;
	cin>>N;
	bool ok=false;
	for(ll sx=1; sx<=90 ; sx++){
			
		ll p = (sx*sx + 4*N);
		if(isPerfect(p)){
			//cout<<N<<" ----> "<<sx<<endl;
			ll root = -sx+(ll)sqrt(p);
			//cout<<"Root= "<<root<<endl;
			if(root%2ll==0 and sumD(root/2ll)==sx){
				cout<<root/2ll;
				return 0;
			}
		}
	}

	cout<<-1<<endl;
	return 0;
}