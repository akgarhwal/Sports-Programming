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
vi money;
vector<bool> seen(1001);
vi grid[1001];
int avg=0,nCC=0,rMoney=0;

//dfs
void dfs(int s){
    seen[s]=true;
    rMoney += money[s];
    nCC++;
    for(int i=0;i<grid[s].size();i++){
        int u = grid[s][i];
        if(seen[u]==false){
            dfs(u);
        }
    }
}

//main
int main(){
    int tc,cs=0;
    si(tc);
    while(tc--){
        int n,m,x,y,total=0;
        ssi(n,m);
        money.clear();
        money.pb(0);
        seen.clear();
        for(int i=0;i<n;i++){
            grid[i].clear();
            seen[i]=false;
            si(x);
            total+=x;
            money.pb(x);
        }
        seen[n]=false;
        for(int i=0;i<m;i++){
            ssi(x,y);
            grid[x].pb(y);
            grid[y].pb(x);
        }
        if((total%n)!=0 or total<n){
            cout<<"Case "<<++cs<<": "<<"No\n";
            continue;
        }
        avg = total/n;
        int retmoney=0;
        //cout<<avg<<endl;
        bool flag=true;
        for(int i=1;i<=n;i++){
            rMoney=0;
            nCC=0;
            if(seen[i]==false){
                dfs(i);
                //cout<<"\nCC = "<<nCC<<"  Mo = "<<rMoney<<endl;
                if(rMoney/nCC != avg or rMoney%nCC!=0){
                    flag=false;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"Case "<<++cs<<": "<<"No\n";
        }
        else{
            cout<<"Case "<<++cs<<": "<<"Yes\n";
        }
    }
    return 0;
}
