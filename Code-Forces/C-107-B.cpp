/*
	Author      : akgarhwal
	Date        : 07-01-2017 17:30:51
	Description : Phone Number
*/

#include <bits/stdc++.h>
using namespace std;

bool isTaxiNumber(string num){
	set<char> st(num.begin(),num.end());
	if(st.size()==2){
		return true;
	}
	return false;
}

bool isPizzaNumber(string num){
	num.erase(2,1);
	num.erase(4,1);
	for(int i=1; i< 6; i++){
		if(num[i-1]<=num[i]){
			return false;
		}
	}
	return true;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	string name[n];
	int a[n][3];
	int mT=0,mP=0,mG=0;
	for(int i=0; i< n; i++){
		a[i][0]=a[i][1]=a[i][2]=0;
		int M;
		cin>>M>>name[i];
		for(int j=0; j< M; j++){
			string Number;
			cin>>Number;
			if(isTaxiNumber(Number)){
				a[i][0]++;
				mT = max(a[i][0],mT);
			}else if(isPizzaNumber(Number)){
				a[i][1]++;
				mP = max(a[i][1],mP);
			}
			else{
				a[i][2]++;
				mG = max(a[i][2],mG);
			}			
		}		
	}
	bool comma=false;
	cout<<"If you want to call a taxi, you should call: ";
	for(int i=0; i< n; i++){
		
		if(a[i][0]==mT){
			if(comma){
				cout<<", ";
				comma = false;
			}
			cout<<name[i];
			comma=true;
		}
		
	}
	comma = false;
	cout<<".\nIf you want to order a pizza, you should call: ";
	for(int i=0; i< n; i++){
		
		if(a[i][1]==mP){
			if(comma){
				cout<<", ";
				comma = false;
			}
			cout<<name[i];
			comma=true;
		}
		
	}
	comma = false;
	cout<<".\nIf you want to go to a cafe with a wonderful girl, you should call: ";
	for(int i=0; i< n; i++){
		
		if(a[i][2]==mG){
			if(comma){
				cout<<", ";
				comma = false;
			}
			cout<<name[i];
			comma=true;
		}
	}
	cout<<".";

	return 0;
}