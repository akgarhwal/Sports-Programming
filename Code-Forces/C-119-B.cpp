/********************************************
*	Author      : akgarhwal					*
*	Date        : 11-01-2017 22:32:47		*
*	Description : Rhombus					*
*********************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll w,h;
	cin>>w>>h; 
	ll res=0;
	for(ll i=2; i<=w; i+=2){
		for(ll j=2; j<=h ; j+=2){
			res += ((w-i+1)*(h-j+1));
		}
	}
	cout<<res<<endl;
	return 0;
}