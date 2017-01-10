/*
	Author      : akgarhwal
	Date        : 06-01-2017 15:10:59
	Description : Garland
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	int sum=0;
	cin>>s>>t;
	int S = s.size(),T=t.size();
	int a[26]={0};
	int b[26]={0};
	bool ok=true;
	for(int i=0; i< S; i++){
		a[s[i]-'a']++;
	}
	for(int i=0; i< T; i++){
		b[t[i]-'a']++;
	}
	for(int i=0; i< 26; i++){
		//cout<<a[i]<<" ";
		if(a[i]==0 and b[i]>0){
			ok=false;
			break;		
		}

		sum += min(a[i],b[i]);
	}
	if(ok==false){
		cout<<-1<<endl;
	}
	else{
		cout<<(S-sum)<<endl;
	}
	return 0;
}