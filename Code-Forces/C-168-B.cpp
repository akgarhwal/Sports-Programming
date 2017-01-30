/*
	Author      : akgarhwal
	Date        : 15-01-2017 13:44:40
	Description : Convex Shape
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
char g[50][50];
bool cal(int i,int j,int x,int y){
	if(i==x){
		for(int p=j; p<=y ; p++){
			if(g[i][p]=='W'){
				return false;
			}
		}
		return true;
	}
	else if(j==y){
		for(int p=i; p<=x ; p++){
			if(g[p][j]=='W'){
				return false;
			}
		}
		return true;
	}
	else if(j<y){
		bool temp=true;
		for(int p=i; p<=x ; p++){
			if(g[p][j]=='W'){
				temp=false;
				break;
			}
		}
		bool temp2=true;
		for(int p=j; p<=y ; p++){
			if(g[x][p]=='W'){
				temp2=false;
				break;
			}
		}
		if(temp and temp2){
			return true;
		}
		temp=true;
		for(int p=i; p<=x ; p++){
			if(g[p][y]=='W'){
				temp=false;
				break;
			}
		}
		temp2=true;
		for(int p=j; p<=y ; p++){
			if(g[i][p]=='W'){
				temp2=false;
				break;
			}
		}
		if(temp and temp2){
			return true;
		}
		return false;
	}
	else{
		bool temp=true;
		for(int p=i; p<=x ; p++){
			if(g[p][j]=='W'){
				temp=false;
				break;
			}
		}
		bool temp2=true;
		for(int p=y; p<=j ; p++){
			if(g[x][p]=='W'){
				temp2=false;
				break;
			}
		}
		if(temp and temp2){
			return true;
		}
		temp=true;
		for(int p=i; p<=x ; p++){
			if(g[p][y]=='W'){
				temp=false;
				break;
			}
		}
		temp2=true;
		for(int p=y; p<=j ; p++){
			if(g[i][p]=='W'){
				temp2=false;
				break;
			}
		}
		if(temp and temp2){
			return true;
		}
		return false;
	}
	return true;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cin>>g[i][j];
		}
	}

	bool res=true;
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			if(g[i][j]=='B'){
				for(int x=i; x< n; x++){
					for(int y=0; y< m; y++){

						if(g[x][y]=='B'){
						//	cout<<"I = "<<i<<" J = "<<j<<" X= "<<x<<" Y = "<<y<<endl;
							res = cal(i,j,x,y);
						//	cout<<res<<" \n";
						}
						if(res==false){
							cout<<"NO\n";
							return 0;
						}
					}
				}
			}
		}
	}
	cout<<"YES\n";
	return 0;
}