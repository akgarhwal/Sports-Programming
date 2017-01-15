/*
	Author      : akgarhwal
	Date        : 11-01-2017 23:06:16
	Description : Friends
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int m,x,y;
	cin>>m;
	int count[6]={0};
	for(int i=0; i< m; i++){
		cin>>x>>y;
		count[x]++;
		count[y]++;
	}
	bool tr = true;
	for(int i=1; i<= 5; i++){
		cout<<count[i]<<" ";
		if(count[i]==2){

		}
		else{
			tr=false;
			break;
		}
	}
	//cout<<tr<<" "<<m<<endl;
	if(tr==true and m==5){
		cout<<"FAIL";
	}
	else{
		cout<<"WIN";
	}
	return 0;
}