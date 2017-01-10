/*
	Author      : akgarhwal
	Date        : 07-01-2017 21:24:36
	Description : Student
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	vector<int> A[n+1];
	int f[n+1]={0};
	for(int i=0; i< m; i++){
		int a,b;
		cin>>a>>b;
		A[a].push_back(b);
		A[b].push_back(a);
		f[a]++;
		f[b]++;
	}
	int ans=0;
	while(true){
		vector<int> in;
		for(int i=1; i<= n; i++){
			if(f[i]==1){
				in.push_back(i);
			}
			//cout<<f[i]<<" ";
		}
		if(in.size()>0){
			for(int i=0; i< in.size(); i++){
				int ele = A[in[i]][0];
			//	cout<<"Ele = "<<ele<<endl; 
				for(int j=0; j< A[ele].size(); j++){
					if(A[ele][j]==in[i]){
						A[ele].erase(A[ele].begin()+j);
					}
				}
				if(A[in[i]].size()>0)
					A[in[i]].erase(A[in[i]].begin());
				f[in[i]]--;
				f[ele]--;

			}
			ans++;

		}
		else{
			break;
		}
	}
	cout<<ans<<endl;

	return 0;
}