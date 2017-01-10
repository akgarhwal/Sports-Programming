/*
	Author      : akgarhwal
	Date        : 05-01-2017 23:53:41
	Description : Combination
*/

#include <bits/stdc++.h>
using namespace std;

bool myfun(pair<int,int> &A,pair<int,int> &B){
	if(A.second > B.second){
		return true;
	}
	else if(A.second == B.second){
		if(A.first > B.first){
			return true;
		}
		return false;
	}
	return false;
}


int main(){
	int n,a,b;
	cin>>n;
	vector<pair<int,int> > st;
	for(int i=0; i< n; i++){
		cin>>a>>b;
		st.push_back(make_pair(a,b));
	}
	sort(st.begin(),st.end(),myfun);
	int counter=1;
	int point=0;
	for(int i=0; i< n; i++){
		counter += st[i].second;
		point += st[i].first;
		counter--;
		if(counter==0){
			break;
		}
	}

	cout<<point;
	return 0;
}