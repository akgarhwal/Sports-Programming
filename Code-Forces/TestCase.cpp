/*
	Author      : akgarhwal
	Date        : 20-03-2017 09:11:58
	Description : 
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

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,q;
	cin>>n>>q;
	vector<int> a(n,0);
	vector<int> has[40001];
	for(int i=0; i< n; i++){
		cin>>a[i];
		has[a[i]].pb(i);
	}
	while(q--){
		int l,r,x,y;
		cin>>l>>r>>x>>y;
		int count=0;
		if(x<=10){
			for(int i=l; i<= r; i++){
				if(a[i]%x == y){
					count++;
				}
			}
		}
		else{
			int z=0;
			int num=0;
			while(num <= 40000){
				num = x*z+y;
				z++;
				if(sz(has[num])){
					for(int j=0; j< sz(has[num]); j++){
						int ind = has[num][j];
						if(ind>=l and ind <= r){
							count++;
						}
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}