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

bool myfun(ii a,ii b){
	if(a.first < b.first){
		return true;
	}
	else if(a.first == b.first){
		if(a.second > b.second){
			return true;
		}
		else{
			return false;
		}
	}
	return false;
}

int numberOfDivisor(int n){   
	int b=n;
    int res=1;
    for(int k=2;k*k<=n;k++){
        int p=0;
        while(n%k==0){
            p++;
            n/=k;
        }
        res *= (p+1);
    }
    if(n>1)
        res *= (2);
    return res;
}
int main(){
	vector<ii> seq;
	rer(i,1,1000){
		int nod = numberOfDivisor(i);
		//cout<<i<<" "<<nod<<endl;
		seq.push_back({nod,i});
	}
	sort(ALL(seq),myfun);
	int tc,cs=0;
	S(tc);
	while(tc--){
		int n;
		S(n);
		cout<<"Case "<<++cs<<": "<<seq[n-1].second<<endl;
	}
	return 0;
}