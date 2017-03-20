#include <bits/stdc++.h>

using namespace std; 

string s; 

long long memoize[100002][5]; 
long long f(int i, int m){
    if(i == (int)s.size()){
        return 0; 
    }
    if(memoize[i][m] != -1) {
        return memoize[i][m]; 
	}
    int x=s[i]-'0'; 
    int ans = f(i + 1, (m + x) % 3) + ((x + m) % 3 == 0 and x % 2 == 0); 

    return memoize[i][m] = ans;    
}

int main(){
    //freopen("in","r",stdin); 
    memset(memoize, -1, sizeof memoize); 
    long long ans=0; 
    cin >> s;     
    for(int i=0; i<(int)s.size(); i++) {
        if(s[i] == '0') ans++; 
        else ans = ans + f(i,0); 
        cout<<ans<<" ";
        
    }
    cout << ans << endl; 

    return 0; 
}