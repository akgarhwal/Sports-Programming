/*
	Author      : akgarhwal
	Date        : 09-01-2017 10:13:57
	Description : DFS Graph
*/

#include <bits/stdc++.h>
using namespace std;

bool found=false;
vector<pair<int,int> > ad;
vector<bool> seen;

bool isMove(int i,int j){
	int a = ad[i].first;
	int b = ad[i].second;
	int c = ad[j].first;
	int d = ad[j].second;
	if((c<a and a<d) or (c<b and b<d)){
		return true;
	}
	return false;
	
}

void DFS(int s,int t){
	seen[s]=true;
	//cout<<"Vi = "<<s<<endl;
	if(s==t){
		found = true;
		return;
	}
	//cout<<"Size = "<<ad.size()<<endl;
	for(int i=0; i< ad.size(); i++){
		if(found){
			return;
		}
		//cout<<"Try = "<<s<<" "<<i<<endl; 
		if(seen[i]==false and isMove(s,i)){
			DFS(i,t);
			//cout<<"S = "<<i<<"\tT = "<<t<<endl;
		}
	}

}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int q,t,x,y;
	cin>>q;
	//vector<pair<int,int> > ad;
	for(int i=0; i< q; i++){
		cin>>t>>x>>y;
		if(t==1){
			ad.push_back(make_pair(x,y));
		}
		else{
			seen.clear();
			seen.assign(ad.size(),false);
			// for(int j=0; j< ad.size(); j++){
			// 	cout<<seen[i]<<" ";
			// }
			// cout<<endl;
			 DFS(x-1,y-1);
			// cout<<"S = "<<x-1<<"\tT = "<<y-1<<endl;
			if(found){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
			found = false;
		}
	}
	return 0;
}