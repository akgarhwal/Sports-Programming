/*
	Author      : akgarhwal
	Date        : 05-01-2017 21:00:32
	Description : Little Pigs
*/

#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cin>>a[i][j];
		}
	}
	int ans=0;
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			if(a[i][j]=='W'){
				int ui = i-1,di = i+1,lj = j-1,rj =j+1;
				if(ui>=0 and ui<n and a[ui][j]=='P'){
					ans++;
					a[ui][j]='.';
				}
				else if(di>=0 and di<n and a[di][j]=='P'){
					ans++;
					a[di][j]='.';
				}
				else if(lj>=0 and lj<m and a[i][lj]=='P'){
					ans++;
					a[i][lj]='.';
				}
				else if(rj>=0 and rj<m and a[i][rj]=='P'){
					ans++;
					a[i][rj]='.';
				}
			}
		}	
	}
	cout<<ans<<endl;
	return 0;
}