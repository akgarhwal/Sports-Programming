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
    int count=1;
    while(tc--){
        string s;
        cin>>s;
        int len = sz(s);
        char matrix[800][400];
        for(int i=0;i<800;i++){
            for(int j=0;j<400;j++){
                matrix[i][j]=' ';
            }
        }
        int x=400,y=0,i=0,lastpos=-1;
        int mi=400,mx=400;
        while(y<len){
            if(s[i]=='R'){
                matrix[x][y]='/';
                x--;
                mi = min(x,mi);
            }
            else if(s[i]=='F'){
                x++;
                mx =max(mx,x);
                matrix[x][y]='\\';
            }
            else{
                matrix[x][y]='_';
            }
            y++;
            i++;
        }
        bool dec=true;
        for(int i=0;i<len;i++){
            if(matrix[mi][i]!=' '){
                dec=false;
                break;
            }
        }
        if(dec){
            mi++;
        }
        cout<<"Case #"<<count++<<":\n";
        for(int i=mi;i<=mx;i++){
            cout<<"| ";
            for(int x=0;x<len;x++){
                if(matrix[i][x]!=' ')
                    lastpos=x;
            }
            for(int j=0;j<=lastpos;j++){
                cout<<matrix[i][j];
            }
            cout<<"\n";
        }
        cout<<"+";
        for(int i=0;i<=len+1;i++){
            cout<<"-";
        }
        cout<<"\n\n";
    }
    return 0;
}
