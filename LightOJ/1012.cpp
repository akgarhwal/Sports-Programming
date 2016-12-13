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
int R,C;
char grid[20][20];
bool seen[20][20];
int dr[] = {-1,0,1,0};
int dc[] = {0,-1,0,1};
int count1=0;
//bfs
int dfs(int r,int c){
    count1++;
    seen[r][c]=true;
    int u,v;
    for(int i=0;i<4;i++){
        u = r + dr[i];
        v = c + dc[i];
        if(u>=0 and u<R and v>=0 and v< C and seen[u][v]==false and grid[u][v]!='#'){
            dfs(u,v);
        }
    }
}
//main
int main(){
    int tc,cs=1;
    si(tc);
    while(tc--){
        int n,m,x,y;
        si(m);si(n);
        R=n;C=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                seen[i][j]=false;
                if(grid[i][j]=='@'){
                    x=i;y=j;
                }
            }
        }
        count1=0;
        dfs(x,y);
        cout<<"Case "<<cs++<<": "<<count1<<endl;

    }
    return 0;
}
