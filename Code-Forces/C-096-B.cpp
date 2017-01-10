/*
	Author      : akgarhwal
	Date        : 06-01-2017 00:37:25
	Description : Unary	
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000003

long long pow2(int x,int y){
	long long res=1,sq=x;
	while(y){
		if(y%2){
			res = (res*sq)%mod;
		}
		sq = (sq*sq)%mod;
		y=y/2;
	}
	return res;
}


int main(){
	string p;
	cin>>p;
	map<char, string> mp;
	mp.insert(make_pair('>',"1000"));
	mp.insert(make_pair('<',"1001"));
	mp.insert(make_pair('+',"1010"));
	mp.insert(make_pair('-',"1011"));
	mp.insert(make_pair('.',"1100"));
	mp.insert(make_pair(',',"1101"));
	mp.insert(make_pair('[',"1110"));
	mp.insert(make_pair(']',"1111"));
	string s="";
	for(int i=0; i< p.size(); i++){
		s += (mp[p[i]]);
	}
	long long res=0,pos=0;
	for(int i=(s.size()-1); i>=0; i--){
		if(s[i]=='1'){
			res = (res+pow2(2,pos))%mod; 
		}
		pos++;
	}

	cout<<res<<endl;
	return 0;
}