/*
	Author      : akgarhwal
	Date        : 10-01-2017 13:36:27
	Description : Training
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k,ans=0;
	cin>>n>>k;
	int a[n],b[101]={0};
	for(int i=0; i< n; i++){
		cin>>a[i];
		b[a[i]]++;
	}
	if(a[0]==k){
		cout<<0<<endl;
		return 0;
	}
	for(int v=0; v< 200; v++){

		for(int i=0; i< n-1; i++){
			if(a[i]==a[i+1]){

			}
			else{
				//cout<<"# "<<i<<endl;
				a[i] = a[i]+1;
			}
		//	cout<<a[i]<<" ";
		}
		a[n-1]++;
		//cout<<a[n-1]<<endl;
		if(a[0]==k){
			ans=v+1;
			break;
		}
		
	}

	cout<<ans<<endl;
	return 0;
}