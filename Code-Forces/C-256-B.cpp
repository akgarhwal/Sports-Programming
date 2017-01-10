/*
	Author      : akgarhwal
	Date        : 04-01-2017 19:33:27
	Description : Suffix Structure
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	int S=s.size(),T=t.size();
	if(S==T){
		int a[26]={0};
		for(int i=0; i< S; i++){
			a[s[i]-'a']++;
		}
		for(int i=0; i< T; i++){
			a[t[i]-'a']--;
		}
		bool ok=true;
		for(int i=0;i<=25;i++){
			if(a[i]){
				ok=false;
				break;
			}
		}
		if(ok){
			cout<<"array\n";
		}
		else{
			cout<<"need tree\n";
		}
	}
	else if(S>T){
		int a[26]={0};
		for(int i=0; i< S; i++){
			a[s[i]-'a']++;
		}
		for(int i=0; i< T; i++){
			a[t[i]-'a']--;
		}
		bool ok=true;
		for(int i=0;i<=25;i++){
			//cout<<a[i]<<" ";
			if(a[i]<0){
				ok=false;
				break;
			}
		}
		if(ok){
			int j=0;
			for(int i=0; i< S; i++){
				if(s[i]==t[j]){
					j++;
				}
			}
			if(j==T){
				cout<<"automaton\n";
			}
			else{
				cout<<"both\n";
			}
		}
		else{
			cout<<"need tree\n";
		}
	}
	else{
		cout<<"need tree\n";
	}
	return 0;
}