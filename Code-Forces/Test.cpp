// author = "akgarhwal"

#include <iostream>
using namespace std;
int a[]=     {1,2,3,4,5,6,7};
int memo[] = {-1,-1,-1,-1,-1,-1,-1};
int lis(int i){
	if(memo[i]==-1){
		int m=0;
		for(int j=0; j< i; j++){
			if(a[j]<a[i]){
				m = max(m,lis(j));
			}		
		}
		return (memo[i]=m+1);
	}
	else
		return memo[i];
}


int main(){
	
	int x = lis(6);
	cout<<x<<endl;
	return 0;
}