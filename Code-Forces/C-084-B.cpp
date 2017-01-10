/*
	Author      : akgarhwal
	Date        : 07-01-2017 11:51:34
	Description : Lucky string
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<char> v;
	for(int i=0; i< (n); i++){
		if(i<n){
			v.push_back('a');
		}
		i++;
		if(i<n){
			v.push_back('b');
		}
		i++;
		if(i<n){
			v.push_back('c');
		}
		i++;
		if(i<n){
			v.push_back('d');
		}
	}
	string s(v.begin(),v.end());
	cout<<s;
	return 0;
}