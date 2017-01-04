/*
	Author      : akgarhwal
	Date        : 04-01-2017 14:46:39
	Description : DZY Love String
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int k;
	long long mx=-1;
	long long a[26];
	cin>>k;
	for(int i=0; i< 26; i++){
		cin>>a[i];
		mx = max(a[i],mx);
	}
	long long res=0;
	int len = s.size();
	for(int i=0; i< (len+k); i++){
		if(i<len){
			res += (long(i+1)*a[s[i]-'a']);
		}
		else{
			res += (long(i+1)*mx);
		}
	}
	cout<<res<<endl;
	return 0;
}