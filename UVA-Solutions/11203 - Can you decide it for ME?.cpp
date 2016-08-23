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
        string s;
        //getline(cin,s);
        cin>>s;
        int len = sz(s);
        bool M=0,E=0,Q=0,O=0;
        int mpos=-1,epos=-1;
        int first=0,middle=0,last=0;
        for(int i=0;i<len;i++){
            if(mpos==-1 and s[i]=='?'){
                first++;
            }
            else if(mpos!=-1 and epos==-1 and s[i]=='?'){
                middle++;
            }
            else if(s[i]=='?'){
                last++;
            }
            if(s[i]=='M' and mpos==-1){
                mpos=i;
                M=1;
            }
            else if(s[i]=='E' and epos==-1){
                epos=i;
                E=1;
            }
            else if(s[i]=='?'){
                Q=1;
            }
            else{
                O=1;
            }
        }
        if(((first+middle)!=last) or (O==1)or(M==0) or E==0 or ((epos-mpos)<2)or mpos==0 or epos==(len-1)){
            cout<<"no-theorem"<<endl;
        }
        else{
            cout<<"theorem"<<endl;
        }
    }
    return 0;
}
