/*
	Author      : akgarhwal
	Date        : 23-01-2017 10:08:39
	Description : letstry
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
	int M[n][m];
	char ch;
	for(int i=0; i< n; i++){
		for(int j=0; j< m; j++){
			cin>>ch;
			M[i][j] = int(ch-48);
		}
	}
	int ans=0;
	for(int a=0; a< n; a++){
		for(int b=0; b< m; b++){
			for(int c=a; c< n; c++){
				for(int d=b; d< m; d++){
					bool one = false;
					for(int i=a; i<=c; i++){
						for(int j=b; j<=d ; j++){
							if(M[i][j]==1){
								one = true;
								break;
							}
						}
						if(one){
							break;
						}
					}
					if(one==false){
					//	cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<" D = "<<d<<endl;
						int L = c-a+1,R = d-b+1;
					//	cout<<"L = "<<L<<" R = "<<R<<endl;
						ans = max(ans,(L+R)*2);

					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}	