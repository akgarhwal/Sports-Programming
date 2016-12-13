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

map<string,int> month;


int main(){
	month["January"]=1;
	month["February"]=2;
	month["March"]=3;
	month["April"]=4;
	month["May"]=5;
	month["June"]=6;
	month["July"]=7;
	month["August"]=8;
	month["September"]=9;
	month["October"]=10;
	month["November"]=11;
	month["December"]=12;
	int tc,cs=0;
	S(tc);
	while(tc--){
		string m1,m2;
		char ch;
		int d1,d2,y1,y2;
		cin>>m1>>d1>>ch>>y1>>m2>>d2>>ch>>y2;
		if(month[m1]>2) y1++;
		if(month[m2]==1) y2--;
		if(month[m2]==2 and d2<=28) y2--;
		int res=0;
		res = (y2/4) - (y1-1)/4;
		res -= (y2/100  - (y1-1)/100);
		res += (y2/400  - (y1-1)/400);
		cout<<"Case "<<++cs<<": "<<res<<endl;
	}
	return 0;
}