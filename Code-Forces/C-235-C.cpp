/*
	Author      : akgarhwal
	Date        : 31-01-2017 15:18:55
	Description : lets divide in team
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

	int n,m;
	cin>>n>>m;
	bool f = false;
	if(m>=n-1 and n*2+2>=m){
		while(n<m and n>0 and m>0){
			f=true;
			if(m>=2){
				cout<<11;
				m=m-2;
			}
			else if(m>=1){
				cout<<1;
				m=m-1;
			}
			if(n>=1){
				cout<<0;
				n=n-1;
			}
		}

		while(n>0 and m>0){
			if(f){
				cout<<10;
			}
			else
				cout<<"01";
			m--;
			n--;
		}
		if(m>=2){
			cout<<11;
		}
		else if(m>=1){
			cout<<1;
		}
		if(n){
			cout<<0;
		}
	}
	else{
		cout<<"-1";
	}
	return 0;
}