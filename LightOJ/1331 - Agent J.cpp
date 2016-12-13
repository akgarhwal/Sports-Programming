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
		double r1,r2,r3;
		cin>>r1>>r2>>r3;
		double a=r1+r2,b=r2+r3,c=r1+r3;
		//cout<<a<<" "<<b<<" "<<c<<endl;
		double B = acos((-1)*((c*c)-(a*a)-(b*b))/(2*b*a));
		//cout<<B<<endl;
		double C = acos((-1)*((a*a)-(b*b)-(c*c))/(2*b*c));
		//cout<<C<<endl;

		double A = (2*acos(0.0))-B-C;
		//cout<<A<<endl;
		double tri_area = (0.5)*a*b*sin(B);
		//cout<<tri_area<<endl;
		double area1 = (0.5)*B*r2*r2;
		double area2 = (0.5)*C*r3*r3;
		double area3 = (0.5)*A*r1*r1;
	
		//cout<<area1<<" "<<area2<<" "<<area3<<endl;
		double res = (tri_area - area1-area2-area3);
		printf("Case %d: %.15lf\n",++cs,res);
	}
	return 0;
}