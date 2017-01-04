/*
	Author      : akgarhwal
	Date        : 04-01-2017 10:15:52
	Description : T-Primes
*/

#include <iostream>
#include <stdio.h>		
#include <math.h>
using namespace std;

bool isPrime(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	if(!(n%2) or !(n%3))	return false;
	int i=5;
	while(i*i<=n){
		if(!(n%i) or !(n%(i+2))){
			return false;
		}
		i+=6;
	}
	return true;
}

bool isTprime(long long n){
	long long sq = (sqrt(n)+1e-7);
	if(isPrime(sq) and sq*sq==n){
		return true;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		long long number;
		cin>>number;
		if(isTprime(number)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}