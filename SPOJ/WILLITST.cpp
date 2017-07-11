#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(!(n&n-1)){
        cout<<"TAK";
    }
    else{
        cout<<"NIE";
    }
}
