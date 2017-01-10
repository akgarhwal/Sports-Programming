/*
	Author      : akgarhwal
	Date        : 08-01-2017 15:11:07
	Description : Number System
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;		

int num9(ll n){
	int r=0;
	while(n){
		if(n%10==9){
			r++;
		}
		else{
			break;
		}
		n=n/10ll;
	}
	return r;
}
ll pow2(ll k){
	ll res=1;
	for(int i=0; i<k ; i++){
		res = res*10ll;
	}
	return res;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll p,d;
	cin>>p>>d;
	ll low = p-d;
	ll res=0;
	int n9=0;
	for(int k=1; k< 19; k++){
		ll rem = (p - (p%(pow2((ll)k)) ))-1;
		int X = num9(rem);
        if(rem>=low and X>n9 ){
			res = rem;
			n9 = X;
		}
		if(rem>=low and X==n9){
			res = max(res,rem);
		}
		//cout<<res<<" ";
		//if(rem<0)	break;
	}
	if(res==0)	res=p;
	else{
		int x = num9(p);
		if(x>n9){
			res=p;
		}
		if(x>=n9){
			res = max(res,p);
		}
	}
	cout<<res;
	
	return 0;
}