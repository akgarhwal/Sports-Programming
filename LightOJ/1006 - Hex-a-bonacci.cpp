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
		ll a,b,c,d,e,f,n,R=0;
		S2(a,b);S2(c,d);S2(e,f);S(n);
		for(int i=6;i<=n;i++){
			R = (a+b+c+d+e+f)%10000007;
			a=b;b=c;c=d;d=e;e=f;f=R;
		}
		if(n<=5){
			switch(n){
				case 0:
				cout<<"Case "<<++cs<<": "<<a%10000007<<endl;
				break;
				case 1:
				cout<<"Case "<<++cs<<": "<<b%10000007<<endl;
				break;
				case 2:
				cout<<"Case "<<++cs<<": "<<c%10000007<<endl;
				break;
				case 3:
				cout<<"Case "<<++cs<<": "<<d%10000007<<endl;
				break;
				case 4:
				cout<<"Case "<<++cs<<": "<<e%10000007<<endl;
				break;
				case 5:
				cout<<"Case "<<++cs<<": "<<f%10000007<<endl;
				break;
			}
		}
		else
			cout<<"Case "<<++cs<<": "<<R%10000007<<endl;
	}
	return 0;
}