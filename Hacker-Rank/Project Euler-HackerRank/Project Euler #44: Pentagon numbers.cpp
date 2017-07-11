#include<bits/stdc++.h>
using namespace std;
vector<long long int> pn;
set<long long int> spn;
void penNumber(){
    pn.push_back(1);
    long long int t=1,x=1;
    while(x<=1000000){
        pn.push_back(t);
        spn.insert(t);
        x++;
        t=(x*(3*x-1))>>1;
    }
}
int main(){
    penNumber();
  long long int n,k;
    set<long long int> ans;
  cin>>n>>k;
  for(int i=k+1;i<n;i++){
      long long int p=pn[i]-pn[i-k];
      if(spn.count(p)>0){
          ans.insert(pn[i]);
      }
      p=pn[i]+pn[i-k];
      if(spn.count(p)>0){
          ans.insert(pn[i]);
      }
  }
  set<long long int>::iterator it;
    for(it = ans.begin();it!=ans.end();it++)
            cout<<*it<<"\n";
  return 0;
}
