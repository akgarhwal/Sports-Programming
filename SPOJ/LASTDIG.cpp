#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int ar[]={1,1,4,4,2,1,2,4,4,2};
    while(tc--){
        long long a,b;
        cin>>a>>b;
        a=a%10;
        if(b==0){
            cout<<1<<endl;
            continue;
        }
        b = b%ar[a];
        b = (b==0)?ar[a]:b;
        int res = pow(a,b);
        cout<<res%10<<endl;
    }
}
