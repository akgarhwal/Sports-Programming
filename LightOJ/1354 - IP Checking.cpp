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
	cin>>tc;
	while(tc--){
		string S,T;
		cin>>S>>T;
		int a=0,b=0,c=0,d=0,i=0;
		while(S[i]!='.'){
			a=a*10+(int)(S[i]-48);
			i++;
		}
		i++;
		while(S[i]!='.'){
			b=b*10+(int)(S[i]-48);
			i++;
		}
		i++;
		while(S[i]!='.'){
			c=c*10+(int)(S[i]-48);
			i++;
		}
		i++;
		while(i<S.size()){
			d=d*10+(int)(S[i]-48);
			i++;
		}
		int A=0,B=0,C=0,D=0,x=7;
		i=0;
		while(x>=0){
			if(T[i]=='1')
				A+=pow(2,((int)(T[i]-48))*x);
			i++;
			x--;
		}
		x=7;i++;
		while(x>=0){
			if(T[i]=='1')
				B+=pow(2,((int)(T[i]-48))*x);
			i++;
			x--;
		}
		x=7;i++;
		while(x>=0){
			if(T[i]=='1')
				C+=pow(2,((int)(T[i]-48))*x);
			i++;
			x--;
		}
		x=7;i++;
		while(x>=0){
			if(T[i]=='1')
			D+=pow(2,((int)(T[i]-48))*x);
			i++;
			x--;
		}
		if(A==a and B==b and C==c and D==d){
			cout<<"Case "<<++cs<<": "<<"Yes\n";
		}
		else{
			cout<<"Case "<<++cs<<": "<<"No\n";
		}
	}
	return 0;
}