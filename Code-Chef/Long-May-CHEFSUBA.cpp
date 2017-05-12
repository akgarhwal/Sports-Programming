/*
	Author      : akgarhwal
	Date        : 05-05-2017 16:57:54
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

	int n,k,p;
	cin>>n>>k>>p;

	if(k>n){
		k = n;
	}

	int one = 0;

	vi a(2*n,0);
	for(int i=0; i< n; i++){
		int x;
		cin>>x;
		a[n-(i+1)]=x;
		a[(2*n)-(i+1)]=x;
	}
	// for(int i=0; i< 2*n; i++){
	// 	cout<<a[i]<<" ";
	// }
	vi ans(n+5,0);
	int f=0,s=0;
	int temp=0;
	int getC[200005];
	set<pair<int,int>> st;

	while(f<n and s<n){

		while(s< n and s-f+1 <= k){
			if(a[s]){
				temp++;
			}
			s++;
		}
		
		st.insert({temp,f});
		getC[f] = temp;
		//cout<<"{"<<temp<<","<<f<<"}"<<endl;
		if(a[f]){
			temp--;
		}
		f++;

	}
	//cout<<f<<" :: "<<s<<endl;
	//set<pair<int,int>>::reverse_iterator it ;

	while(f <= 2*n-k  and s<2*n){

		int X = (st.rbegin()->first);
		ans[s-n] = X;
		int Y = s-n;
		int Z = getC[Y];
		//cout<<"::{"<<Z<<","<<Y<<"}"<<endl;

		st.erase(st.find({Z,Y}));


		while(s<2*n and s-f+1 <= k){

			if(a[s]){
				temp++;
			}
			s++;
		}
		st.insert({temp,f});
		getC[f] = temp;
		//cout<<"{"<<temp<<","<<f<<"}"<<endl;
		if(a[f]){
			temp--;
		}
		f++;




	}

	// for(int i=0; i< n; i++){
	// 	cout<<ans[i]<<" ";
	// }
	// cout<<endl;

	string S;
	int ind =0;
	cin>>S;

	for(int i=0; i< sz(S); i++){
			
			if(S[i] == '?'){
				printf("%d\n",ans[ind]);
			}
			else{
				ind++;
				if(ind == n){
					ind=0;
				}

			}
			
	}

	return 0;
}