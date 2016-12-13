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
#define P(t) printf("%f ",t)
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
		double R;
		cin>>R;
		double area_square = (R+R)*(R+R);
		double area_circle = 2*acos(0.0)*R*R;
		//P(area_square);P(area_circle);
		double area = area_square - area_circle;
		area += 1e-9;
		printf("Case %d: %.2f\n",++cs,area);
	}
	return 0;
}