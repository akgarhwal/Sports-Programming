// author = "akgarhwal"

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> myset;
	string s;
	while(getline(cin,s)){
    	myset.push_back(s);
	}
	reverse(myset.begin(),myset.end());
	for(int i=0; i< myset.size(); i++){
		cout<<myset[i]<<endl;
	}
	return 0;
}