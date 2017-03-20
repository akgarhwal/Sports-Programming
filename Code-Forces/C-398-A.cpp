/*
	Author      : akgarhwal
	Date        : 18-02-2017 14:10:57
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,x;
	cin>>n;
	vi has(100001,0);
	int cur=n,last=0;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x==cur){
			cout<<x<<" ";
			cur--;
			while(has[cur]==1){
				cout<<cur<<" ";
				cur--;
			}
			cout<<endl;
		}
		else{
			has[x]=1;
			cout<<endl;
		}

	}
	
	return 0;
}