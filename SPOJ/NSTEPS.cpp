/* akgarhwal */
// When I wrote this, only God and I understood what I was doing
// Now, God only knows
#include<bits/stdc++.h>
using namespace std;
//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
#define sf(t) scanf("%f",&t)
#define sdb(t) scanf("%lf",&t)
#define schar(c) scanf("%c",&c)
#define sstring(s) scanf("%s",s)
#define ssi(a,b) scanf("%d%d",&a,&b)
#define ssl(a,b) scanf("%lld%lld",&a,&b)
// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
typedef set<string> ss;
typedef map<int,int> mii;
typedef map<string,int> msi;
//define
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define mod 1000000007

//main
int main(){
    int tc;
    si(tc);
    while(tc--){
        int x,y;
        si(x);si(y);
        if(x%2==0 and y%2==0 and (x-y==0 or (x-y)==2)){
            cout<<x+y<<endl;
        }
        else if(x%2==1 and y%2==1 and (x-y==0 or (x-y)==2)){
            cout<<x+y-1<<endl;
        }
        else{
            cout<<"No Number"<<endl;
        }
    }
    return 0;
}
