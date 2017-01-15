/*
	Author      : akgarhwal
	Date        : 12-01-2017 21:18:33
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	vector<int> e,o;
	vector<int> hash(100001,0);
	int n,x;
	cin>>n;
	for(int i=0; i< n; i++){
		cin>>x;
		hash[x]++;
		if((x&1)==1){
			o.push_back(x);
		}
		else{
			e.push_back(x);
		}
	}
	int NE = e.size();
		int ans=1;
		//int LIM = sqrt(100000)+1e-7;
		for(int i=3; i< 100000; i+=2){
			int co=hash[i];
				int m=2;
				for(int j=i*m; j<100000 ; j=i*(++m)){
							if(j<100000 and hash[j]){
								co+=hash[j];
							}
				}
			ans=max(ans,co);
		}
		cout<<max(ans,NE)<<endl;
	return 0;
}