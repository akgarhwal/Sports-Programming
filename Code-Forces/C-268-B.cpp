/*
	Author      : akgarhwal
	Date        : 05-01-2017 09:50:23
	Description : Chat Online
*/

#include <bits/stdc++.h>
using namespace std;

pair<int,int> fun(int A,int B,int C,int D){
	int st,end;
	if(D<=A){
		st = A-D;
		end = B-C;
	}
	else if(C<=A and A<=D and D<=B){
		st = 0;
		end = B-C;
	}
	else if(B<=D and A<=C and C<=B){
		st = 0;
		end = B-C;
	}
	else if(C>=B){
		st = 0;
		end =0;
	}
	else{
		st = 0;
		end = B-C;
	}
	return {st,end};
}

int main(){
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	int a[p],b[p],c[q],d[q];
	for(int i=0; i< p; i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0; i< q; i++){
		cin>>c[i]>>d[i];
	}
	int ans=0;
	vector<int> se(1001,0);
	for(int i=0; i< p; i++){
		int A=a[i],B=b[i];
		for(int j=0; j< q; j++){
			int C=c[j],D=d[j];
			pair<int,int> p = fun(A,B,C,D);
			//cout<<p.first<<" "<<p.second<<endl;
			for(int x=p.first; x<=p.second; x++){
				se[x]=1;
			}
			//cout<<ans<<" "<<i<<j;
		}
	}
	for(int i=l; i<=r; i++){
		if(se[i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}	