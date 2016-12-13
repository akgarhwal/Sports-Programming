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
		int n;
		S(n);
		bitset<40> a(n);
		int x=0;
		for(int i=0;i<39;i++){
			if(a[i]==1 and a[i+1]==0){
				int t = a[i];
				a[i] = a[i+1];
				a[i+1]=t;
				x=i;
				break;
			}
		}
		int c1=0;
		for(int i=0;i<x;i++){
			if(a[i]==1){
				c1++;
				a[i]=0;
			}
		}
		int i=0;
		while(c1--){
			a[i++]=1;
		}
		//cout<<a<<endl;
		long long temp1 =(long long)(a.to_ulong());
		cout<<"Case "<<++cs<<": "<<temp1<<endl;
	}
	return 0;
}