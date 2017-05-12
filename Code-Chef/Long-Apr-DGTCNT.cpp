/*
	Author      : akgarhwal
	Date        : 17-04-2017 07:39:47
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

	int tc;
	scanf("%d\n",&tc);
	while(tc--){
		int l,r;
		cin>>l>>r;
		int a[10];
		for(int i=0; i< 10; i++){
			cin>>a[i];
		}
		int ans =0 ;

		for(int i=l; i<=r ; i++){
			
			int d[10] = {0};
			int x = i;
			while(x){
				d[x%10]++;
				x = x/10;
			}	
			bool fl  =true;
			for(int i=0; i< 10; i++){
				if(a[i] == d[i]){
					fl = false;
				}
			}
			if(fl == true){
				ans++;
			}


		}
		cout<<ans<<endl;
	}
		

	return 0;
}