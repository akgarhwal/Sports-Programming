#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int m=0;
        int input[n]={0};
        for(int i=0;i<n;i++){
            cin>>input[i];
            m+=input[i];
        }
        vector<vector<bool> > a(n,vector<bool>(m+1,false));
        // bool a[n][m+1];
        // memset(a,false,sizeof a);
        for(int i=0;i<n;i++){
            a[i][0]=true;
        }
        a[0][input[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=m;j++){
                if(input[i]>j){
                    a[i][j] = a[i-1][j];
                }
                else{
                    a[i][j] = a[i-1][j] or a[i-1][j-input[i]];
                }
            }
        }
        long long ans=0;
        for(int i=1;i<=m;i++){
            if(a[n-1][i]){
                ans+=(long long)(i);
                //cout<<i<<"  ";
            }
        }
        cout<<ans<<endl;
    }
}
