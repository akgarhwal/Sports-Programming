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
    string s;
    int count=1;
    while(getline(cin,s)){
        vs S;
        S.clear();
        while(s!="9"){
            S.pb(s);
            getline(cin,s);
        }
        int n = S.size();
        //cout<<"SIZE = "<<n<<endl;
        bool ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string b = S[j].substr(0,sz(S[i]));
                if(S[i]==b){
                    ans=1;
                    break;
                }
                b = S[i].substr(0,sz(S[j]));
                if(b==S[j]){
                    ans=1;
                    break;
                }
            }
            if(ans) break;
        }
        if(ans){
            cout<<"Set "<<count++<<" is not immediately decodable\n";
        }
        else{
            cout<<"Set "<<count++<<" is immediately decodable\n";
        }
    }
    return 0;
}
