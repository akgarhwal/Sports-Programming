/*
	Author      : akgarhwal
	Date        : 15-01-2017 10:55:28
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	int count[10001]={0};
	int a[n];
	int sum=0;
	for(int i=0; i< n; i++){
		cin>>a[i];
		sum+=a[i];
		count[a[i]]++;
	}
	int avg  = sum/n;
	bool t1=false,t2=false;
	if(count[avg]==n){
		cout<<"Exemplary pages.";
	}
	else if(count[avg] == n-2 and sum%n==0){
		int A=0,b=0;
		for(int i=0; i< n; i++){
			if(a[i]<avg and A==0){
				A=i+1;
			}
			if(a[i]>avg and b==0){
				b=i+1;
			}

		}
		cout<<avg-a[A-1]<<" ml. from cup #"<<A<<" to cup #"<<b<<"."<<endl;
	}
	else{
		cout<<"Unrecoverable configuration.";
	}
	return 0;
}