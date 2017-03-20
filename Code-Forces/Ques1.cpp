// author = "akgarhwal"

#include <iostream>
using namespace std;
int a[] = {1,2,3,4};
int fun(int a[],int n){
	int mi=1e9,csum=0,mx=-1e9;
	for(int i=0; i< n; i++){
		csum+=(a[i]);
		mi = min(mi,csum);
		if(csum - mi  > mx){
			mx = csum-mi;
		}
	}
	return mx;
}

int main(){
	cout<<fun(a,4);
	return 0;
}