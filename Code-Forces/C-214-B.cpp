/*
	Author      : akgarhwal
	Date        : 06-01-2017 12:39:58
	Description : To do list
*/

#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	const int K =k;
	int p[K]={0};
	for(int i=0; i< n; i++){
		cin>>a[i];
		p[i%k] += a[i];
	}
	int ans=0,mi=1e9;
	for(int i=0; i< k; i++){
		if(p[i]<mi){
			ans=i;
			mi = p[i];
		}
		//cout<<mi<<endl;
	}
	cout<<ans+1<<endl;
	return 0;
}