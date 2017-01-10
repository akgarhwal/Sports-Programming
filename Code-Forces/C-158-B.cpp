/*
	Author      : akgarhwal
	Date        : 10-01-2017 10:55:35
	Description : Ancient Prophesy 
*/

#include <bits/stdc++.h>
using namespace std;
int mon[] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool isValid(string str){
	for(int i=0; i< 10; i++){
		if(i!=5 and i!=2 and str[i]=='-'){
			return false;
		}

	}
	if(str[2]!='-' or str[5]!='-' ){
		return false;
	}
	int mo = (str[3]-'0')*10 + (str[4]-'0');
	int day = (str[0]-'0')*10 + (str[1]-'0');
	//cout<<day<<"  "<<mo<<"  \n"; 
	if(day>0 and day<=mon[mo-1]){
		int year = (str[6]-'0')*1000 + (str[7]-'0')*100 + (str[8]-'0')*10 + (str[9]-'0');
	//	cout<<year<<endl;
		if(year >= 2013 and year<=2015){
			return true;

		}
		else{
			return false;
		}
	}
	//cout<<endl;
	return false;
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string s;
	cin>>s;
	map<string, int> mp;
	string ans ="";
	int mx =0;
	for(int i=0; i< s.size()-9; i++){
		string str = s.substr(i,10);
		if(isValid(str)){
//			cout<<str<<endl;
		
			mp[str]++;
			if(mp[str]>mx){
				mx = mp[str];
				ans = str;
			}
		
		}

	}
	cout<<ans<<endl;
	return 0;
}