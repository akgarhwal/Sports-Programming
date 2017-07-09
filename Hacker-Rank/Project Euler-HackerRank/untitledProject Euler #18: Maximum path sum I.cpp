#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
	int r;
	cin>>r;
	int a[r][r];
	for(int i=0;i<r;i++){
		for(int j=0;j<=i;j++){
			cin>>a[i][j];
		}
	}
	int n[r][r];
	int m=0;
	n[0][0]=a[0][0];
	for(int i=1;i<r;i++){
		for(int j=0;j<=i;j++){
			if(j==0){
				n[i][j]=a[i][j]+n[i-1][j];
			}
			else if(j==i){
				n[i][j]=a[i][j]+n[i-1][j-1];
			}
			else{
				n[i][j]=max((a[i][j]+n[i-1][j]),(a[i][j]+n[i-1][j-1]));
			}
		}
	}
	int ans=0;
		for(int j=0;j<=r-1;j++){
			ans=max(ans,n[r-1][j]);
		}
	cout<<ans<<endl;
	}
} 