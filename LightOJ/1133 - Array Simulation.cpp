/*       _                    _                  _ 
    __ _| | ____ _  __ _ _ __| |____      ____ _| |
   / _` | |/ / _` |/ _` | '__| '_ \ \ /\ / / _` | |
  | (_| |   < (_| | (_| | |  | | | \ V  V / (_| | |
   \__,_|_|\_\__, |\__,_|_|  |_| |_|\_/\_/ \__,_|_|
             |___/                                 		

When I wrote this, only God and I understood what I was doing
Now, God only knows												*/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define S(t) scanf("%d",&t)
#define S2(x,y) scanf("%d %d",&x,&y)
#define SL(t) scanf("%lld",&t)
#define P(t) printf("%d ",t)
#define PL(t) printf("%lld ",t)
#define NL printf("\n");
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,n) for(int (i)=(int)(l);(i)<=(int)(n);++(i))

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<long long> vl;

int main(){
	int tc,cs=0;
	S(tc);
	while(tc--){
		int n,q;
		S2(n,q);
		vi a(n,0);
		rep(i,n){
			cin>>a[i];
		}
		char ch;
		while(q--){
			cin>>ch;
			if(ch=='R'){
				reverse(ALL(a));
			}
			else if(ch=='S'){
				int x;
				cin>>x;
				rep(i,n){
					a[i]+=x;
				}

			}
			else if(ch=='M'){
				int x;
				cin>>x;
				rep(i,n){
					a[i]*=x;
				}
			}
			else if(ch=='D'){
				int x;
				cin>>x;
				rep(i,n){
					a[i]/=x;
				}
			}
			else{
				int x,y;
				cin>>x>>y;
				swap(a[x],a[y]);
			}

		}
		cout<<"Case "<<++cs<<":\n";
		rep(i,n-1){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}
	return 0;
}