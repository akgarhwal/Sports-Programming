#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
int no_of_digit(unsigned long long int t){
    int d=0;
    while(t){
        d++;t/=10;
    }
    return d;
}
unsigned long long int pow1(long long int x,int y){
    unsigned long long int res=1;
    while (y > 0)
    {
        if (y & 1)
            res = res*(unsigned long long int)x;
        y = y>>1; // y = y/2
        x = x*x;  // Change x to x^2
    }
    return res;
}
int main(){
    llt n;
    cin>>n;
    llt i=1;
    while(true){
        unsigned long long int a=pow1(i,n);
        int d=no_of_digit(a);
        if(d==n){
            cout<<a<<endl;
        }
        else if(d>n){
            break;
        }
        i++;
    }
  return 0;
}