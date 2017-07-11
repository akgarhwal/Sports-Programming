#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int tc;
  cin>>tc;
  string s="abcdefghijklm";
  std::vector<ll> fact;
  ll f=1;
  fact.push_back(1);
  for(int i=1;i<=13;i++){
    f*=i;
    fact.push_back(f);
  }
  while (tc--) {
    char c='a';
    std::vector<char> ch;
    for(int i=0;i<13;i++){
      ch.push_back(c++);
    }
    ll n;
    cin>>n;
    n--;
    int x=13;
    string ans="";
    while(x--){
      ll q=fact[x];
      ll d=floor((double)n/q);
      d=d%(ch.size());
      ans+=ch[d];
      ch.erase(std::remove(ch.begin(),ch.end(),ch[d]),ch.end());
    }
    cout<<ans<<endl;
  }
}