/*
	Author      : akgarhwal
	Date        : 08-01-2017 23:38:52
	Description : Lucky number
*/

#include <iostream>
using namespace std;


int ind=0;
string set[100];
void permute(string ans,int count[],int level,int mx){
	if(mx==level){
		set[ind++]=ans;
		return;
	}
	for(int i=0; i< 2; i++){
		if(count[i]==0){
			continue;
		}
		ans[level]=char(i==0?(52):(55));
		count[i]--;
		permute(ans,count,level+1,mx);
		count[i]++;
	}

}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	for(int i=1; i<=4 ; i++){
		string ans(i+i,1);
		int count[2]={i,i};
		permute(ans,count,0,i+i);
	}
	string in;
	cin>>in;
	set[ind++] = "4444477777";
	for(int i=0; i< ind; i++){
		//cout<<set[i]<<endl;
		if(set[i]>=in and set[i].size()==in.size()){
			cout<<set[i]<<endl;
			break;
		}
		if(set[i].size()>in.size()){
			cout<<set[i]<<endl;
			break;
		}
	}
	return 0;
}