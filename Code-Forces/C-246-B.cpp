/*
	Author      : akgarhwal
	Date        : 04-01-2017 22:47:16
	Description : Football Kit
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int fx[100005]={0};
	int fy[100005]={0};
	int X[n],Y[n];
	for(int i=0; i< n; i++){
		cin>>X[i]>>Y[i];
		fx[X[i]]++;
	}
	int A[n]={0};
	int B[n]={0};
	for(int i=0; i< n; i++){
		int p = Y[i];
		cout<<(n-1+(fx[p]))<<" "<<n-1-fx[p]<<endl;
	}
	return 0;
}