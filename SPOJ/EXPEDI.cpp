/*
	Author      : akgarhwal
	Date        : 28-02-2017 22:38:54
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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int> > v;
		for(int i=0; i< n; i++){
			int x,y;
			cin>>x>>y;
			v.pb({x,y});
		}
		sort(all(v));
		int D,F;
		cin>>D>>F;
		if(F>=D){ cout<<0<<endl;continue;}
		int ans=0;
		while(D-F > 0){
			int i=n-1;
			int mx = -1,ps=-1;
			while(i>0 and (D-F) <= v[i].first){
				if(mx < v[i].second){
					mx = v[i].second;
					ps = i;
				}
				i--;	
			}
			//cout<<"Mx :: "<<mx<<endl;
			if(mx > -1){
				F = F + v[ps].second;
				v[ps].second = -5;
				ans++;
			}
			else{
				break;
			}
			if(F>=D) break;
		}
		if(F<D){
			cout<<"-1\n";
		}
		else
			cout<<ans<<endl;
	}
	return 0;
}