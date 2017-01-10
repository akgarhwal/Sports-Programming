/*
	Author      : akgarhwal
	Date        : 06-01-2017 11:41:38
	Description : Matrix 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,d,x=0;
	cin>>n>>m>>d;
	int a[n][m];
	set<int> st;
	int b[n*m];
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cin>>a[i][j];
			st.insert(a[i][j]%d);
			b[x++] = a[i][j];
		}
	}
	if(st.size()>1){
		cout<<-1<<endl;
	}
	else{
		sort(b,b+(n*m));
		int med = (n*m +1)/2;
		int ans=0;
		for(int i=0; i< n*m; i++){
			ans += abs(b[med-1]-b[i]);
		}
		cout<<ans/d<<endl;
	}
	return 0;
}