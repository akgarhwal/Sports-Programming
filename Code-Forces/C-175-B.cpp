/*
	Author      : akgarhwal
	Date        : 04-01-2017 17:20:15
	Description : Find Marble
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,s,t;
	cin>>n>>s>>t;
	int p[n];
	for(int i=0; i< n; i++){
		cin>>p[i];
	}
	int move=0;
	vector<bool> ar(n,true);
	while(ar[s-1]){
		if(s==t){
			ar[t-1]=false;
			break;
		}
		int nextPos = p[s-1];
		ar[s-1]=false;
		s=nextPos;
		move++;
	}
	if(ar[t-1]==false)
		cout<<move<<endl;
	else{
		cout<<-1<<endl;
	}
	return 0;

}