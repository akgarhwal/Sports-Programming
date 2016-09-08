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
//global variable
char grid[105][105];
int direction =0;
//main
int main(){
    int n,m,len;
    si(n);si(m);si(len);
    while(n!=0 and m!=0 and len!=0){
        int x,y,u,v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                if(grid[i][j]=='N' || grid[i][j]=='S'||grid[i][j]=='L'||grid[i][j]=='O'){
                    x=i;y=j;
                }
            }
        }
        if(grid[x][y]=='N') direction=0;
        else if(grid[x][y]=='S') direction=2;
        else if(grid[x][y]=='L') direction=1;
        else  direction=3;
        string ins;
        cin>>ins;
        int count=0;
        for(int i=0;i<len;i++){
            if(ins[i]=='D') direction = (direction+1)%4;
            else if(ins[i]=='E'){
                direction=direction-1;
                if(direction<0) direction=3;
            }
            else{
                u=x,v=y;
                if(direction==0)    u--;
                else if(direction==1) v++;
                else if(direction==2) u++;
                else v--;
                if(u<0 || u>=n||v<0 ||v>=m||grid[u][v]=='#') continue;
                else {
                    if(grid[u][v]=='*')
                        count++;
                    grid[u][v]='.';
                    x=u,y=v;
                }
            }
        }
        cout<<count<<endl;
        si(n);si(m);si(len);
    }
    return 0;
}
