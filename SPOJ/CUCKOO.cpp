/*
	Author      : akgarhwal
	Date        : 23-02-2017 06:48:46
	Description : CUCKOO Hashing
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

	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		vi a(n,-1);
		vi count(m,0);
		vector<pair<int,int> > v(m);
		for(int i=0; i< m; i++){
			cin>>v[i].first>>v[i].second;
		}
		bool ans = true;
		for(int i=0; i< m; i++){
			int k = i;
			count.clear();
			count.assign(m,0);
			int cur=-1,prev = -1;
			while(count[k]!=2 and ans==true){
				if(a[v[k].first]==-1){
					a[v[k].first] = k;
					break;
				}
				else if(a[v[k].second]==-1){
					a[v[k].second] = k;
					break;
				}
				else{
					int loc1 = v[k].first,loc2 = v[k].second;
					if(loc1 == prev){
						cur = loc2;
					} 
					else{
						cur = loc1;
					}
					count[k]++;
					prev = cur;
					int temp = a[cur];
					a[cur] = k;
					k = temp;

				}
			}
			if(count[k]==2){
				ans = false;
			}
		}

		if(ans){
			cout<<"successful hashing\n";
		}
		else{
			cout<<"rehash necessary\n";
		}

	}
	return 0;
}