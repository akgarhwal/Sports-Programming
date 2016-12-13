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
		double v1,v2,v3,a1,a2;
		cin>>v1>>v2>>v3>>a1>>a2;
		double t1 = v1/a1;
		double t2 = v2/a2;
		double s1 = v1*t1 + (0.5*(-a1)*(t1*t1));
		double s2 = v2*t2 + (0.5*(-a2)*(t2*t2));
		double d1 = t1*v3;
		double d2 = t2*v3;
		printf("Case %d: %.10lf %.10lf\n",++cs,(s1+s2),max(d1,d2));
	}
	return 0;
}