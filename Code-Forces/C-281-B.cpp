/*
	Author      : akgarhwal
	Date        : 05-01-2017 12:22:36
	Description : Vasya and Wrestling
*/

#include <bits/stdc++.h>
using namespace std;

int compare1(vector<int> &A,vector<int> &B){
	int a = A.size(),b= B.size();
	for(int i=0; i< min(a,b);i++){
		if(A[i]>B[i]){
			return 1;
		}
		else if(A[i]<B[i]){
			return (-1);
		}	
	}
	if(a>b) return 1;
	if(a<b) return -1;
	return 0;
}

int main(){
	int n,x;
	long long pa=0,pb=0;
	int lm=0;
	cin>>n;
	vector<int> A,B;
	while(n--){
		cin>>x;
		if(x<0){
			B.push_back(-x);
			pb += (-x);
			lm=1;
		}
		else{
			A.push_back(x);
			pa += (x);
			lm=2;
		}
	}
	if(pa>pb){
		cout<<"first";
	}
	else if(pa<pb){
		cout<<"second";
	}
	else{
		int res = compare1(A,B);
		if(res==0){
			if(lm==2){
				cout<<"first\n";
			}
			else{
				cout<<"second\n";
			}
		}
		else if(res>0){
			cout<<"first\n";
		} 
		else{
			cout<<"second\n";
		}
	}
	return 0;
}