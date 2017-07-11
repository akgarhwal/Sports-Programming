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
vi color(2001);
vi Adj[2000+1];
bool dfs(int v, int c) {
	color[v] = c;
	for (int i = 0; i < Adj[v].size(); ++i)
		// neighbor has same color
		if (color[Adj[v][i]] == c)
			return false;
		// unvisited vertex
		else if (color[Adj[v][i]] == -1)
			if (!dfs(Adj[v][i], !c))
				return false;
	return true;
}
//main
int main(){
    int tc,cs=0;
    si(tc);
    while(tc--){
        int n,m,X,x,y;
        si(n);si(m);
        X=m;

        for(int i=1;i<=n;i++){
            color[i]=-1;
            Adj[i].clear();
        }
        while(X--){
            si(x);si(y);
            Adj[x].pb(y);
            Adj[y].pb(x);
        }

bool res=true;
for(int i=1;i<=n;i++){
if(color[i]==-1){
    res = dfs(i, 0);

}
if(res==false){
    break;
}
}
printf("Scenario #%d:\n%s\n",++cs, !res ? "Suspicious bugs found!" : "No suspicious bugs found!");

    }
    return 0;
}