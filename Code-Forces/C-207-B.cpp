/*
	Author      : akgarhwal
	Date        : 06-01-2017 15:52:07
	Description : Flag Day
*/

#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int color[n+1]={0};
	int a,b,c;
	bool Z[4];
	for(int i=0; i<m; i++){
		cin>>a>>b>>c;
		Z[1]=Z[2]=Z[3]=true;
		if(color[a]!=0){
			Z[color[a]] = false;
		}
		if(color[c]!=0){
			Z[color[c]] = false;
		}
		if(color[b]!=0){
			Z[color[b]] = false;
		}
		if(color[a]==0){
			if(Z[1]==true){
				color[a]=1;
				Z[1]=false;
			}
			else if(Z[2]==true){
				color[a]=2;
				Z[2]=false;
			}
			else{
				color[a]=3;
				Z[3]=false;
			}
		}
		else{
			int x = color[a];
			Z[x]=false;
		}
		if(color[b]==0){
			if(Z[1]==true){
				color[b]=1;
				Z[1]=false;
			}
			else if(Z[2]==true){
				color[b]=2;
				Z[2]=false;
			}
			else{
				color[b]=3;
				Z[3]=false;
			}
		}
		else{
			int x = color[b];
			Z[x]=false;
		}
		if(color[c]==0){
			if(Z[1]==true){
				color[c]=1;
				Z[1]=false;
			}
			else if(Z[2]==true){
				color[c]=2;
				Z[2]=false;
			}
			else{
				color[c]=3;
				Z[3]=false;
			}
		}
		else{
			int x = color[c];
			Z[x]=false;
		}

	}
	for(int i=1; i<= n; i++){
		cout<<color[i]<<" ";
	}
	return 0;
}