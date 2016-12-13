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

bool check(int x,int y){
	if(int(x&1) == int(y&1)){
		return true;
	}
	return false;
}

int main(){
	int tc,cs=0;
	S(tc);
	while(tc--){
		string moveC = "impossible";
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		bool f1 = check(x1,y1);
		bool f2 = check(x2,y2);
		if((f1==true and f2==true) or (f1==false and f2 ==false)){
			if(abs(x1-x2) == abs(y1-y2)){
				moveC="1";
			}
			else {
				moveC ="2";
			}
		}
		cout<<"Case "<<++cs<<": "<<moveC<<endl;
	}
	return 0;
}