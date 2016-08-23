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
    string s1,s2;
    while(getline (cin,s1)){      //important cin>>s1; and cin>>s2 gives Wrong Answer;
        getline (cin,s2);
        vi freq(26,0);
        vi freq2(26,0);
        vector<bool> fb1(26,0);
        vector<bool> fb2(26,0);
        for(int i=0;i<sz(s1);i++){
            freq[s1[i]-97]++;
            fb1[s1[i]-97]=1;
        }
        for(int i=0;i<sz(s2);i++){
            freq2[s2[i]-97]++;
            fb2[s2[i]-97]=1;
        }
        for(int i=0;i<26;i++){
            if(fb1[i]==1 and fb2[i]==1){
                int X = min(freq[i],freq2[i]);
                while(X--){
                    cout<<char(97+i);
                }
            }
            //cout<<freq[i]<<"  "<<fb1[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
