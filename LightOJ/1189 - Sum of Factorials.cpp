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
	vl F;
	ll fact=1;
	F.push_back(1);
	rer(i,1,20){
		fact*=i;
		F.push_back(fact);
	}

	int tc,cs=0;
	S(tc);

	while(tc--){
		ll N;
		SL(N);	
		set<int> st;
		for(int i=20;i>=0;i--){
			if(F[i]<=N){
				st.insert(i);
				N = N-F[i];
			}
		}
		cout<<"Case "<<++cs<<": ";
		if(N!=0){
			cout<<"impossible\n";
		}
		else{
			set<int>::iterator it=st.begin();
			cout<<*it++;
			while(it!=st.end()){
				cout<<"!+"<<*it++;
			}
			cout<<"!\n";
		}
	}
	return 0;
}