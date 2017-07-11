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
int c,n;
ll a[100001]={0};
int p(ll x)
{
   int i,temp;
   temp=1;
   ll prev;
   prev=a[0];
   for(int i=1;i<n;i++)
   {
       if(a[i]-prev >= x)
       {
           temp++;
           if(temp==c)
               return 1;
           prev=a[i];
       }
   }
   return 0;
}
//main
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        //int n;
        cin>>n>>c;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        ll l=0,r=a[n-1];
        ll mid;
        while(l<r)
    	{
    		mid=(l+r)/2;
    		if(p(mid)==1)
    			l=mid+1;
    		else
    			r=mid;
    	}
   cout<<l-1<<endl;

    }
    return 0;
}
