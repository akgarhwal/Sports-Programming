/*
    Author      : akgarhwal
    Date        : 10-07-2017 20:00:46
    Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long    ll;
typedef vector<int>    vi;
typedef pair<int,int>    pi;
#define F        first
#define S        second
#define PB        push_back
#define MP        make_pair
#define sz(a)        int((a).size())
#define all(c)        (c).begin(),(c).end()
#define REP(i,a,b)    for(int i = a; i < b; i++)
#define tr(c,i)        for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)    ((c).find(x) != (c).end())
#define cpresent(c,x)    (find(all(c),x) != (c).end())
#define MOD        1000000007     /* 10^9+7*/
#define mx6 1000006

ll pd[mx6+10],a[mx6+10];
void sieve(){
        for (int i = 2; i <1000000; i ++){
                    for (int j=2; (j*i) <1000000; j++)
                    {
                        pd[j*i] += (ll)i;
                    }
                }
}

void solve()
{
    a[0]=0;
    a[1]=0;
    for(int i=2;i<1000000;i++)
    {
        a[i]=a[i-1]+pd[i]+1LL;
    }
}

int main(){
    sieve();
    solve();
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        scanf("%d",&n);
        
        printf("%lld\n",a[n]);
    }
}