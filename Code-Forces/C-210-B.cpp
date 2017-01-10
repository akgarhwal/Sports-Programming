/*
	Author      : akgarhwal
	Date        : 07-01-2017 16:27:06
	Description : Permutation
*/

#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	if(n==k ){
		cout<<-1<<endl;
	}
	else{
		int a[n+1];
		for(int i=1; i<= n; i++){
			a[i]=i;
		}
		int sw=2;
		int ge = n-1;
		if(ge%2!=k%2 ){
			a[1]=2;
			a[2]=1;
			sw++;
		}
		else{
			
		}
		ge--;
		
		while(k<ge){
			a[sw]=sw+1;
			a[sw+1]=sw;
			sw+=2;
			ge-=2;
		}
		for(int i=1; i<=n ; i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}