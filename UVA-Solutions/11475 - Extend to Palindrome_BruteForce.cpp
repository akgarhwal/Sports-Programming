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
    while(cin>>s){
        string ps = s;
        bool palin=false;
        reverse(all(ps));
        if(ps==s){
            cout<<s;
            palin=true;
        }
        string ans="";
        int len = sz(s);
        int mid = len%2==0 ? len/2 : len/2 +1;
        while(!palin and mid<=len){
            int left = mid-1;
            int right = mid+1;
            while(s[left]==s[right]){
                left--;
                right++;
                if(right==len)  break;
            }
            if(right==len){
                string str = s.substr(0,left+1);
                reverse(all(str));
                ans = s+str;
                palin=true;
            }
            mid++;
        }
        mid = (len)/2 +1;
        palin=false;
        int left;
        bool flag2 =false;
        string str,t="";
        while(!palin and mid<len){
            left = mid-1;
            int right = mid;
            while(s[left]==s[right]){
                left--;
                right++;
                if(right==len)  break;
            }
            if(right==len){
                flag2=true;
                str = s.substr(0,left+1);
                reverse(all(str));
                 t = s+str;
                break;
            }
            mid++;
        }
        if(flag2 and (sz(ans) > sz(t))){
            cout<<t<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
