/* akgarhwal */
// When I wrote this, only God and I understood what I was doing
// Now, God only knows
#include<bits/stdc++.h>
using namespace std;
//input
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%lld",&t)
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
        int amp,freq;
        cin>>amp>>freq;
        for(int f=0;f<freq;f++){
            for(int x=1;x<=amp;x++){
                for(int i=1;i<=(x);i++){
                    cout<<x;
                }
                cout<<endl;
            }
            for(int x=amp-1;x>=1;x--){
                for(int i=1;i<=(x);i++){
                    cout<<x;
                }
                cout<<endl;
            }
            if(f!=(freq-1))
            cout<<endl;
        }
        if(tc!=0)
        cout<<endl;
    }
    return 0;
}
