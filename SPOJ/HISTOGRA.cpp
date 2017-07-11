#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
    cin>>n;
    do{
 
        long long a[n]={0};
    stack<long long> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long i=0;
    long long MA=0;
    while(i<n){
        if(s.empty()||a[s.top()]<=a[i]){
            s.push(i++);
        }
        else{
            long long  t = s.top();s.pop();
            MA = max(MA,a[t]*(s.empty()?i:i-s.top()-1));
        }
    }
    while(!s.empty()){
        long long t=s.top();s.pop();
        MA=max(MA,a[t]*(s.empty()?i:i-s.top()-1));
    }
    cout<<MA<<endl;
        
    cin>>n;
    }while(n!=0);
    return 0;
}
