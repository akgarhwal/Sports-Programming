/*
	Author      : akgarhwal
	Date        : 10-07-2017 20:04:20
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long	ll;
typedef vector<int>	vi;
typedef pair<int,int>	pi;
#define F		first
#define S		second
#define PB		push_back
#define MP		make_pair
#define sz(a)		int((a).size())
#define all(c)		(c).begin(),(c).end()
#define REP(i,a,b)	for(int i = a; i < b; i++)
#define tr(c,i)		for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)	((c).find(x) != (c).end())
#define cpresent(c,x)	(find(all(c),x) != (c).end())
#define MOD		1000000007 	/* 10^9+7*/
#define mx7   10000007

ll pd[mx7+10],a[mx7+10];
bool prime[mx7+10];

void sieve(){
        for (ll i = 2; i <=mx7; i+= 2)
           prime[i]=1, pd[i] = 2;

        for (ll i = 3; i <=mx7; i += 2){
                if (!prime[i]){
                    pd[i] = i;
                    for (ll j=i; (j*i) <=mx7; j += 2)
                    {
                        prime[j*i] = 1;
                        if(!pd[j*i])
                        pd[j*i] = i;
                    }
                }
        }
}

void solve()
{
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=mx7;i++)
    {
        a[i]=a[i-1]+pd[i];
    }
}


int main()
{
    sieve();
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;

    }
    return 0;
}
