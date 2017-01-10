/*
	Author      : akgarhwal
	Date        : 06-01-2017 12:51:34
	Description : Coins
*/

#include <iostream>
using namespace std;

int main(){
	int n,d=2;
	cin>>n;
	int a[n+1]={0};
	for(int i=0; i<=n; i++){
		a[i]=1;
	}
	for(int i=1; i<=n; i++){
		int j = i;
		for(; j<=n; j+=i){
			if(a[j]==1){
				a[j] =i;
			}
		}
		//cout<<a[i]<<" ";
	}
	cout<<n<<" ";
	if(n==1) return 0;
	while(true){
		int d = n/a[n];
		if(d==1){
			break;
		}
		cout<<d<<" ";
		n=d;
	}
	cout<<1<<endl;


	return 0;
}