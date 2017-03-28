/*
	Author      : akgarhwal
	Date        : 27-03-2017 20:17:02
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

	int n,k;
	cin>>n>>k;
	vector<ll> a(k,0LL);
	for(int i=0; i< n; i++){
		cin>>a[i];
	}
	int K=k;
	int lead = 1;
	int i=0;
	vi has(101,1);
	int N=n;
	while(K--){
		int step = a[i];
		step = step%n;
		//cout<<"STEP :: "<<step<<endl;
		int z = 1;
		int cur = lead;
		
		if(step>0){
			cur++;
			if(cur>N){
					cur = 1;
				}
			while(z<step and step>0){
				if(has[cur]){
					z++;
				}
				//if(z == step) break;
				cur++;
				if(cur>N){
					cur = 1;
				}
			}	
		}
		else{
			cur = lead;
		}

		

		while(has[cur]==0){
			cur++;
			if(cur>N){
				cur = 1;
			}
		}
		has[cur]=0;
		cout<<cur<<" ";

		n--;
		cur++;
		if(cur>N){
			cur = 1;
		}
		while(has[cur]==0){
			cur++;
			if(cur>N){
				cur = 1;
			}
		}
		lead = cur;
		//cout<<lead<<endl;
		i++;
	}
	return 0;
}