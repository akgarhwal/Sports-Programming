/*
	Author      : akgarhwal
	Date        : 06-01-2017 19:53:35
	Description : lets start on CFR 390
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int s=0;
	for(int i=0; i< n; i++){
		cin>>a[i];
		s+=a[i];
	}
	if(s!=0){
		cout<<"YES\n1\n1 "<<n<<endl;
		return 0;
	}
	else{
		for(int i=0; i< n; i++){
			s+=a[i];
			if(s!=0){
				cout<<"YES\n2\n1 "<<i+1<<endl;
				cout<<i+2<<" "<<n;
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}