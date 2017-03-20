// author = "akgarhwal"

#include <bits/stdc++.h>
using namespace std;

void rotate(int a[],int n,int k){
	k = k%n;
	reverse(a,a+k);
	reverse(a+k,a+n);
	reverse(a,a+n);
	for(int i=0; i< n; i++){
		cout<<a[i]<<" ";
	}
} 

int main(){
	int a[]={1,2,3,4,5,6,7};
	rotate(a,7,21);
	return 0;
}