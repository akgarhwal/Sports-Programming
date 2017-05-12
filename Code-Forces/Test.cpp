/*
       _ _              ___ _____ ___   __   
__   _(_) | ____ _ ___ / _ \___  / _ \ / /_  
\ \ / / | |/ / _` / __| | | | / / | | | '_ \ 
 \ V /| |   < (_| \__ \ |_| |/ /| |_| | (_) |
  \_/ |_|_|\_\__,_|___/\___//_/  \___/ \___/ 
                                             
The following code is copied from https://google.com/find-it-yourself */
    
#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef std::vector<int> vi;
typedef std::vector<long long> vl;
#define all(v) v.begin(),v.end()
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define f(a,b,c)                for(int a=b;a<c;a++)
#define s(x)                    scanf("%d",&x);
#define sl(x)                   scanf("%lld",&x);
#define cinArray(a,n)                for(int ix=0;ix<n;ix++) cin>>a[ix];
#define MAX 1000005
#define MOD 1000000007
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807LL
#define PI 3.14159265358979323846264338327950288
#define FAST_IN_OUT             ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

bool isPossible(ull x,ull y,ull p,ull q){
   if(q>=y && (p-x)<=(q-y) && (p-x)>=0){
    return true;
   }
   return false;
}

int main(){
   
    
    
    int t;
    cin>>t;
    while(t--) {
        ull x,y,p,q;
        cin>>x>>y>>p>>q;

        if(y<q && x<=p){
          cout<<(q-y)<<endl;
          continue;
        }
        ull g= __gcd(x,y);
        if(p==(x/g) && q== (y/g)){
          cout<<0<<endl;
          continue;
        }
        ull l=1,h=1000000007,mid;
        mid=(l+h)/2;
        while(l<=h){
          mid=(l+h)/2;
          if(isPossible(x,y,mid*p,mid*q)){
            h=mid-1;
          }else{
            l=mid+1;
          }
        }
        if(mid==(1e9+7)){
          cout<<"-1"<<endl;
        }else{
          mid--;
          while(!isPossible(x,y,mid*p,mid*q)) mid++;
          cout<<((q*mid)-y)<<endl;
        }
    }
}