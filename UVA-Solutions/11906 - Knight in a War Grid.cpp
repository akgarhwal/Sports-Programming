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
#define forit(i, a) for ( __typeof( a.begin() ) i = a.begin(); i != a.end(); i++ )
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define mod 1000000007
set< pair< int, int > > mov;
int M,N,count1=0,R,C;
int ans[2]={0,0};
int seen[105][105]={0};
int water[105][105]={0};
//dfs
void dfs(int r, int c)
{
    seen[r][c] = true;
    int cnt = 0;
    forit(it, mov)
    {
        int nr = r + it->first;
        int nc = c + it->second;
        if ( nr>=0 && nr<R && nc>=0 && nc<C && !water[nr][nc]  )
        {
            cnt++;
            if ( !seen[nr][nc] ) dfs( nr, nc );
        }
    }

    ans[ cnt%2 ]++;
}
//main
int main(){
    int tc;
    si(tc);
    int t=0;
    while(tc--){
        count1=0;
        ans[0]=0;ans[1]=0;
        int x,y;
        cin>>R>>C>>M>>N;
        int wcount=0;
        cin>>wcount;

        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                water[i][j]=0;
                seen[i][j]=0;
            }
        }
        for(int i=0;i<wcount;i++){
            cin>>x>>y;
            water[x][y]=1;
        }
        mov.clear();
        for (int k=0; k<2; k++)
        {
            for (int dr=-1; dr<=1; dr++)
                for (int dc=-1; dc<=1; dc++)
                    if ( dr && dc )
                        mov.insert( make_pair(dr*M, dc*N) );
            swap( M, N );
        }
        dfs(0,0);
        printf("Case %d: %d %d\n",++t,ans[0],ans[1]);
    }
    return 0;
}
