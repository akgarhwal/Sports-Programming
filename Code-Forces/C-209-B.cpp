/*
	Author      : akgarhwal
	Date        : 07-01-2017 20:40:11
	Description : Permuatation
*/

#include <iostream>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k;
	cin>>n>>k;
	int a[2*n];
	a[0]=0;
	for(int i=1; i<= 2*n;i++){
		a[i]=i;
		if(k){
			a[i+1] =i+1;
			swap(a[i],a[i+1]);
			k--;
			i++;
		}
	}
	for(int i=1; i<= 2*n; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}