/*
	Author      : akgarhwal
	Date        : 22-12-2016 17:22:10
	Description : Sort the array
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int st=-1,end=-1;
	for(int i=0; i< n-1; i++){
		if(a[i]>a[i+1] and st==-1){
			st=(i);
		}
		if((a[i]<a[i+1]) and st!=-1 and end==-1){
			end=(i);
		}
	}

	if(end==-1 and st!=-1){
		end=n-1;
	}
	if(st!=-1){
		reverse(a+st,a+end+1);
	}
	bool flag=true;
	int x=0,y=0;
	// for(int i=0; i< n; i++){
	// 	cout<<a[i]<<" ";
	// }
	for(int i=0; i< n-1; i++){
		if(a[i]>a[i+1]){
			flag=false;
			break;
		}
	}
	if(flag and st!=-1 ){
		cout<<st+1<<" "<<end+1;
	}
	else{
		cout<<"0 0";
	}
	return 0;
}