/*
	Author      : akgarhwal
	Date        : 05-01-2017 21:48:22
	Description : Painting Egg
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;
	cin>>n;
	int sa=0,sb=0;
	int a[n],g[n];
	string s="";
	for(int i=0; i< n; i++){
		scanf("%d %d\n",&a[i],&g[i]);
		//cout<<s<<endl;
		if(a[i]<g[i]){
			sa+=a[i];
			s+='A';
		}
		else{
			s+='G';
			sb+=g[i];
		}
		
		if(abs(sa-sb)>500){
			if(a[i]<g[i]){
				sa -= a[i];
				sb += g[i];
				s[i]='G';
			}
			else{
				sb -= g[i];
				s[i]='A';
				sa += a[i];
			}
		}
		
	}
	if(abs(sa-sb)<=500)
		printf("%s\n",s.c_str());

	return 0;
}