// When I wrote this, only God and I understood what I was doing
// Now, God only knows
/* akgarhwal */
#include<bits/stdc++.h>
using namespace std;
// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
//define
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

//main
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n,0);
    vector<ll> cs(n,0);
    cin>>a[0];
    cs[0]+=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cs[i]=cs[i-1]+a[i];
    }
    int l=0,r=0;
    ll sum=0,ans=0;
    while(l<n or r<n){
        sum = cs[r]-cs[l]+a[l];
        if(sum<=m){
            r++;
            ans = max(ans,sum);
        }
        else{
            l++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
