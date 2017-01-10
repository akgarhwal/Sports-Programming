/*
	Author      : akgarhwal
	Date        : 06-01-2017 14:44:31
	Description : Lazer gun
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,x,y;
	cin>>n>>a>>b;
	bool inf=false;
	set<double> st;
	double ang = 0.0;
	for(int i=0; i< n; i++){
		cin>>x>>y;
		if(x-a == 0 ){
			inf = true;
		}
		else{
			ang = (y-b)/(double)(x-a);
			st.insert(ang);
		}
		//cout<<ang<<endl;
	}
	cout<<st.size()+inf<<endl;
	return 0;
}