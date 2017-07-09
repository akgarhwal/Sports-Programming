#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findDigit(int l){
	int r=0;
	if(l==0)return 0;
	else{
		while(l>0){
			l/=10;
			r++;
		}
	}
	return r;
}

int main() {
   int n;
    cin>>n;
   string a[n];
    //taking input
    for(int i=0;i<n;i++){
            cin>>a[i];
        }
    
	//addition
    int ans[50];
    long int l=0;
    long int rem=0;
		for(int i=49;i>=0;i--){
			l=rem;
			for(int j=n-1;j>=0;j--){
			 l+=a[j][i]-48;
			}
			ans[i]=l%10;
            rem = l/10;
		}
		
	//last part display	
	int digit=findDigit(rem);	
	
	cout<<rem;	
	for(int i=0;i<10-digit;i++){
	cout<<ans[i];
	}
  return 0;
}