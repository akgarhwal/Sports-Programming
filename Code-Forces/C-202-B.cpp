/*
	Author      : akgarhwal
	Date        : 07-01-2017 13:39:54
	Description : I LOVE TANYA
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int v;
	cin>>v;
	int a[10];
	int mi=1e7,d=0;
	for(int i=1; i< 10; i++){
		cin>>a[i];
		if(a[i]<=mi){
			mi =a[i];
			d=i;
		}
	}
	if(v/mi!=0){
		int cur=0;
		vector<char> s((v/mi),char(d+48));
		int D[10]={0};
		for(int i=1; i< 10; i++){
			D[i] = a[i]-mi;
			//cout<<D[i]<<" ";
		}
		int ld =d;
		v=v%mi;
		while(v>0){
		//	cout<<"V = "<<v<<" "<<ld<<endl;
			d=0;
			for(int i=9; i>=1 ; i--){
				if(D[i]<=v and i>ld){
					d=i;
					break;
				}
			}
		//	cout<<"D = "<<d<<endl;
			if(d!=0){
				for(int z=0; z< (v/D[d]); z++){
					s[cur++] = char(d+48);
				}
				v=v%(D[d]);
			}
			else{
				break;
			}
			
			
		}
		for(int i=0; i< s.size(); i++){
			cout<<s[i];
		}
	}
	else{
		cout<<-1;
	}
	return 0;
}