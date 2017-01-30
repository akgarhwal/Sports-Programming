/*
	Author      : akgarhwal
	Date        : 15-01-2017 22:35:42
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool isPrime(int n){
	if(n<=1) return false;
	if(n<=3) return true;
	if(! ((n%2) and (n%3) )) return false;
	int lim = sqrt(n)+1e-7;
	for(int i=5; i<=lim; i+=6){
		if(!( (n%i) and (n%(i+2)))){
			return false;
		}
		
	}
	return true;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	for(int i=1; i< 1001; i++){
		if(isPrime(n*i+1)==false){
			cout<<i;
			break;
		}
	}
	return 0;
}