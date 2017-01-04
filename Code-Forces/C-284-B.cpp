/*
	Author      : akgarhwal
	Date        : 04-01-2017 10:04:29
	Description : Lecture
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	map<string, string> mp;
	while(n--){
		string k,v;
		cin>>k>>v;
		mp[k]=v;
	}
	while(m--){
		string word;
		cin>>word;
		string nextW = mp[word];
		if(word.size()<= nextW.size()){
			cout<<word<<" ";
		}
		else{
			cout<<nextW<<" ";
		}
	}
	return 0;
}