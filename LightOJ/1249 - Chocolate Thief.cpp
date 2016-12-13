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
		string s[n];
		int v[n];
		multiset<int> mst;
		set<int> st;
		int l,b,h;
		rep(i,n){
			cin>>s[i]>>l>>b>>h;
			mst.insert(l*b*h);
			st.insert(l*b*h);
			v[i] = (l*b*h);
		}
		if(st.size()>1){
			string th1,th2;
			set<int>::iterator it=st.begin();
			int x=*it;
			rep(i,n){
				if(mst.count(x)==1 and x==v[i]){
					th2=s[i];
				}
			}
			if(st.size()>2)
					++it;
			++it;
			x = *(it);
			rep(i,n){
				if(mst.count(x)==1 and x==v[i]){
					th1=s[i];
				}
			}
			cout<<"Case "<<++cs<<": "<<th1<<" took chocolate from "<<th2<<endl;

		}
		else{
			cout<<"Case "<<++cs<<": no thief\n";
		}
	}
	return 0;
}