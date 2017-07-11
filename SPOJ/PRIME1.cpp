#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(!(n%2 and n%3))  return false;
    int c = int(sqrt(n)+1e-7);
    for(int i=5;i<=c;i+=6){
        if(!(n%i and n%(i+2)))  return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=n;i<=m;i++){
            if(isPrime(i))
                printf("%d\n",i);
        }
    }
    printf("\n");
}
