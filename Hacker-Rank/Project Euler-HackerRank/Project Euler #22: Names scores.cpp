#include<bits/stdc++.h>
using namespace std;
int getScore(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        res+=(s[i]-64);
    }
    return res;
}
int main(){
    vector<string> d;
  int n;
  cin>>n;
  int x=1;
  while(n--){
      string s;
      cin>>s;
      d.push_back(s);
  }
  sort(d.begin(),d.end());
  int q;
  cin>>q;
  while(q--){
      string s;
      cin>>s;
      int sc = getScore(s);
      int x= lower_bound(d.begin(), d.end(), s) - d.begin();
      cout<<sc*(x+1)<<endl;
  }
  return 0;
}