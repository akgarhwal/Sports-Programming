/*
	Author      : akgarhwal
	Date        : 05-04-2017 07:17:24
	Description : BFS + Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

void BFS(int n, vi parent,vi value){
	queue<ll> q;
	q.push(1);
	parent[1] = 0;
	int curnum  = 1;
	while(!(q.empty())){
		curnum = q.front();q.pop();
		if(curnum == 0){
			break;
		}
		int temp = (curnum*10ll)%n;
		if(parent[temp] == -1){
			q.push(temp);
			parent[temp] = curnum;
			value[temp] = 0;
		}
		temp = (curnum*10ll + 1ll)%n;
		if(parent[temp] == -1){
			q.push(temp);
			parent[temp] = curnum;
			value[temp] = 1;
		}
	}
	stack<int> s;
	while(parent[curnum]){
		s.push(value[curnum]);
		curnum = parent[curnum];
	}
	s.push(1);
	while(!(s.empty())){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;

}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vi parent(20001,-1);
		vi value(20001,-1);
		BFS(n,parent,value);
	}
	return 0;
}