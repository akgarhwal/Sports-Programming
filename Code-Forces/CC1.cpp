/*
	Author      : akgarhwal
	Date        : 06-02-2017 09:36:53
	Description : first one
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

	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vi a(n,0);
		int pos=-1,cnt=0;

		for(int i=0; i< n; i++){
			cin>>a[i];
			if(a[i]==0 and pos==-1){
				pos = i;
			}
			if(pos!=-1 and a[i]==1){
            	cnt++;
			}
		}
		ll res=0;
		if(pos==-1){
			cout<<0<<endl;
		}
		else{
			res = (n-pos)*(ll)1100 - (cnt)*(ll)1000;
			cout<<res<<endl; 
		}
	}
	return 0;
}