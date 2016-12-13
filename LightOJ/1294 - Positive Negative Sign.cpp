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
#define S2(x,y) scanf("%lld %lld",&x,&y)
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
		ll n,m;
		S2(n,m);
		ll N1 = n/(2*m);
		ll N2 = n/(2*m);
		if(n%(2*m)!=0){
			N2 = n/(2*m) +1;
		}
		ll sum=0;
		ll msum = (m*(m+1))/2;
		m =m*m;
		ll sumn = (N2*((msum*2)+(N2-1)*(2*m)))/2;

		ll sump = (N1*(((msum+m)*2)+(N1-1)*(2*m)))/2;
		cout<<"Case "<<++cs<<": "<<sump-sumn<<endl;
	}
	return 0;
}	