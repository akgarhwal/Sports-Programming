/* akgarhwal */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll> getVec(vector<ll> a,int c,int n){
  vector<ll> res;
  int N = n-c; 
  for(int i=1;i<(1<<N);i++){
    
    ll mul = 1ll;
    bool isin = true;
    for(int j=0;j<n;j++){
      
      if( (i&(1<<j)) ){
        
        if(log10(mul)+log10(a[j+c]) <= 18.0){
          mul = mul*a[j+c];
        }
        else{
          isin = false;
          break;
        }
        
      }
      
    }
    if(isin){
      res.push_back(mul);
    }
    
  }
  
  return res;
  
}
 
 
int bin(vector<ll> a,ll k,ll x){
  
  int lo = 0,hi = a.size()-1;
  int ind = -1;
  while(lo <= hi){
    
    int mid  = (lo+hi)/2;
    //cout<<lo <<"  "<<hi<<endl;
    
    ll y = a[mid];
    if(log10(y)+log10(x) <= 18.0){
      
      if(y*x <= k){
        lo = mid+1;
        ind = mid;
      }
      else{
        hi = mid-1;
      }
      
    }
    else{
      hi = mid-1;
    }
    
    
  }
  return ind;
  
  
}
 
 
 
int main(){
  
  ll n,k;
  cin>>n>>k;
  vector<ll> a;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if( x<=k )
      a.push_back(x);
  }
  
  n = a.size();

  vector<ll> A = getVec(a,0,n/2);
  vector<ll> B = getVec(a,n/2,n);
  
  sort(B.begin(),B.end());
  
 
  
  ll ans = 0;
  ans = bin(B,k,1ll)+1;
  
  for(int i=0;i<A.size();i++){
    
  //  cout<<i<< "  " ;
    ll x = A[i];
    if(x <= k ){
      ans += 1;
      int p = bin(B,k,x);
  //    cout<<p<<endl;
      if( p != -1){
        
        ans += (p+1);
        
      }
    }
  }
  
  cout<<ans<<endl;
  
  
  
  
}