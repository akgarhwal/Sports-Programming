#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int ar[]={1,1,4,4,2,1,2,4,4,2};
    while(tc--){
        unsigned long long a,b;
        string s;
        cin>>s;
        cin>>b;
        a = (s[s.size()-1]-48);
        if(b==0){
            cout<<1<<endl;
            continue;
        }
        b = b%(long long)ar[a];
        b = (b==0)?ar[a]:b;
        int res = pow(a,b);
        cout<<res%10<<endl;
    }
}
