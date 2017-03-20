/*
	Author      : akgarhwal
	Date        : 20-02-2017 09:21:28
	Description : lets start
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long		 ll;
typedef vector<int> 	 vi; 
typedef pair<int,int> 	 ii; 
#define sz(a) 			 int((a).size()) 
#define pb 				 push_back 
#define all(c)           (c).begin(),(c).end() 
#define tr(c,i) 		 for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 	 ((c).find(x) != (c).end()) 
#define cpresent(c,x) 	 (find(all(c),x) != (c).end()) 

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	while(n!=0){
		vi a(n,0);
		for(int i=0; i< n; i++){
			cin>>a[i];
		}
		stack<int> st;
		int co=1;
		for(int i=0; i< n; i++){
			int x = a[i];
			if(x==co){
				co++;
			}else{
				if(!st.empty()){
					int y = st.top();
					if(y==co){
						st.pop();
						co++;
						i--;
					}
					else{
						st.push(x);
					}
				}
				else{
					st.push(x);
				}

			}
		}
		while(!st.empty()){
			int x = st.top();st.pop();
			if(x==co){
				co++;
			}
			else{
				break;
			}
		}
		if(co==n+1){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
		cin>>n;
	}
	return 0;
}