/*
	Author      : akgarhwal
	Date        : 14-01-2017 11:29:35
	Description : Jury Size
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
int dayNumber(int m,int d){
	int sum=0;
	for(int i=0; i<m-1 ; i++){
		sum += month[i];
	}
	return sum+d;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	vector<int> jury(366,0);
	for(int i=0; i< n; i++){
		int m,d,p,t;
		cin>>m>>d>>p>>t;
		int dayno = dayNumber(m,d);
		for(int j=max(0,(dayno-t)); j< dayno; j++){
			jury[j] += p;
		}
	}
	cout<<"Hello";
	int ans=0;
	for(int i=0; i< 366; i++){
		ans =max(ans,jury[i]);
	}
	cout<<ans<<endl;


	return 0;
}