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
		string s,t,a,b;
		cin>>ws;
		getline(cin,s);
		cin>>ws;
		getline(cin,t);
		rep(i,s.size()){
			if(s[i]!=' ')
				a+=tolower(s[i]);
		}
		rep(i,t.size()){
			if(t[i]!=' ')
				b+=tolower(t[i]);
		}
		sort(ALL(a));
		sort(ALL(b));
		bool fl1=false,fl2=false;
		vi A(26,0);
		rep(i,a.size()){
			A[a[i]-97]++;
		}
		rep(i,b.size()){
			A[b[i]-97]--;
		}
		rep(i,26){
			if(A[i]>0){
				fl1=true;
				break;
			}
		}
		vi B(26,0);
		rep(i,b.size()){
			B[b[i]-97]++;
		}
		rep(i,a.size()){
			B[a[i]-97]--;
		}
		rep(i,26){
			if(B[i]>0){
				fl2=true;
				break;
			}
		}
		if(fl1==true and fl2==true){
			cout<<"Case "<<++cs<<": No\n";
		}
		else{
			cout<<"Case "<<++cs<<": Yes\n";
		}



	}
	return 0;
}