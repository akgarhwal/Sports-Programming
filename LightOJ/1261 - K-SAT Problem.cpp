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
		int n,m,k,p,x;
		cin>>n>>m>>k;
		int a[n][k];
		rep(i,n){
			rep(j,k){
				cin>>a[i][j];
			}
		}
		cin>>p;
		vector<bool> v(p+1,false);
		rep(i,p){
			cin>>x;
			v[x]=true;
		}
		bool res = true,temp;
		rep(i,n){
			temp = false;
			rep(j,k){
				int z = a[i][j];
				if(z<0){
					temp = temp or (!v[-z]);
				}
				else{
					temp = temp or v[z];
				}
				if(temp){
					break;
				}
			}
			res = res and temp;
		}
		if(res){
			cout<<"Case "<<++cs<<": Yes"<<endl;
		}
		else{
			cout<<"Case "<<++cs<<": No"<<endl;	
		}
	}
	return 0;
}