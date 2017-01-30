/*
	Author      : akgarhwal
	Date        : 16-01-2017 10:41:46
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int m,s;
	cin>>m>>s;
	vector<int> v(m,0);
	vector<int> z(m,0);
	z[0]= s>0 ?1:0;
	if((s==0 and m>1) or (m*9 < s)){
		cout<<"-1 -1";
		return 0;
	}
	else{

		int t = s-1;
		int i=0;
		//gen Max
		while(s>0){
			v[i++] = min(9,s);
			s=s-min(9,s);
		}
		//gen Min
		i=m-1;
		while(t>0){
			z[i--] += min(9,t);
			t=t-min(9,t);
		}
		
	}

	for(int i=0; i< m; i++){
		cout<<z[i];
	}
	cout<<" ";
	//reverse(v.begin(),v.end());
	for(int i=0; i< m; i++){
		cout<<v[i];
	}
	
	return 0;
}