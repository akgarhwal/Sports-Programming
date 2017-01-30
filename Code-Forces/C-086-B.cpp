/*
	Author      : akgarhwal
	Date        : 16-01-2017 19:13:19
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	vector<string> S;
	for(int i=0; i< n; i++){
		string s;
		cin>>s;
		S.push_back(s);
	}
	sort(S.begin(),S.end());
	int enemyList[16]={0};
	for(int i=0; i< m; i++){
		string s,t;
		cin>>s>>t;
		int is = find(S.begin(),S.end(),s)-S.begin();
		int it = find(S.begin(),S.end(),t)-S.begin();
		enemyList[is] |= (1<<it);
		enemyList[it] |= (1<<is);
	}
	// for(int i=0; i< n; i++){
	// 	cout<<enemyList[i]<<endl;
	// }
	vector<string> ans;
	for(int i=0; i< (1<<n); i++){
		
		vector<string> temp;
		int E =0;
		for(int j=0; j< n; j++){
			if(i&(1<<j)){
				temp.push_back(S[j]);
				E = E | enemyList[j];
			}
		}

		if((i&E)==0){
			//cout<<"I = "<<i<<" E = "<<E<<endl;
			if(ans.size()<temp.size()){
				ans=temp;
			}
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0; i< ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}