#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool palindrome(int num){
    int rev =0,xyz = num;
    while(xyz>0){
        rev = rev*10+(xyz%10);
        xyz=xyz/10;
    }
    if(num==rev)
        return true;
    else
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int f=0;
        int x=999,y=999;
        int pal = x*y;
        int p = 0;
        for(int i=x;i>=100;i--){
            for(int j=y;j>=100;j--){
                pal = i*j;
                if(palindrome(pal)==true){
                    if(pal<n && p<pal){
                        p=pal;
                    }
                    
                }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}