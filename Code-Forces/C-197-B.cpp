/*
	Author      : akgarhwal
	Date        : 22-12-2016 14:44:36
	Description : Xenia and Ringroad
*/

#include<iostream>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long next=0,res=0,cur=1;
	for(int i=0;i<m;i++){
		cin>>next;
		if(next<cur){
			res+=(n-cur+next);
		}
		else{
			res+=(next-cur);
		}
		cur=next;
	}
	cout<<res;
	return 0;
}