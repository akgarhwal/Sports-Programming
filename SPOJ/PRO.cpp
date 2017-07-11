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
    int tc;
    cin>>tc;
    ll sum=0;
    multiset<int> ms;
    multiset<int>::iterator it;
    multiset<int>::reverse_iterator it1;
        int k,x;
    while(tc--){
        cin>>k;
        while(k--){
            cin>>x;
            ms.insert(x);
        }
        int mi = *ms.begin();
        int mx = *ms.rbegin();
        sum += (mx-mi);
         it = ms.begin();
         ms.erase(it);
         it = ms.end();
         ms.erase(--it);
    }
    cout<<sum<<endl;
    return 0;
}
