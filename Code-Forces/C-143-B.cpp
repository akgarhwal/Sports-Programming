/*
	Author      : akgarhwal
	Date        : 09-01-2017 12:26:08
	Description : Magic
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,d,l;
	cin>>n>>d>>l;
	vector<int> v;
	v.push_back(d);
	for(int i=0; i< n-1; i++){
		d = v[i];
		if(d<=0){
			v[i]=1;
			v.push_back(abs(d)+1);
		}
		else{
			v[i] = l;
			v.push_back(l-d);
		}
		//cout<<v[i]<<" "<<v[i+1]<<endl;
	}

	if(1<=v[n-1] and v[n-1]<=l){
		for(int i=0; i< n; i++){
			cout<<v[i]<<" ";
		}
	}
	else{
		cout<<-1;
	}
	
	return 0;
}