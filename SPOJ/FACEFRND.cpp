#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int> s;
    set<int> fr;
    while(t--){
        int a,n;
        cin>>a>>n;
        fr.insert(a);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
    }
    int ans = s.size();
    set<int>::iterator it= fr.begin();
    while(it!=fr.end()){
        int x = *it++;
        if(s.count(x)>0){
            ans--;
        }
    }
    cout<<ans;
}
