/*
	Author      : akgarhwal
	Date        : 28-03-2017 14:14:45
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

	int k;
	cin>>k;
	string q;
	cin>>q;
	if(sz(q) < k ){
		cout<<"NO\n";
	}
	else{
		set<char> st(all(q));
		if(sz(st) < k){
			cout<<"NO";
		}
		else{
			cout<<"YES\n";
			vi a(27,1);
			int i=0;
			while(k--){
				string s="";
				bool start = true;
				for(; i< sz(q); i++){
					if(a[q[i]-'a'] and start){
						s += q[i];
						a[q[i]-'a']=0;
						start = false;

					}
					else if(a[q[i]-'a']==1 and start == false){
						break;
					}
					else{
						s += q[i];
					}
				}
				//cout<<" I :: "<<i<<endl;
				if(k==0){
					for(; i< sz(q); i++){
						s+=q[i];
					}
				}
				cout<<s<<endl;

			}
			
		}
	}
	return 0;
}	