#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int y=2;
        int f=1;
        long long int x=n;
        while(true){
            int i=2;
            f=1;
            for(;i<=n;i++){
                if(x%i!=0)
					break;
            }
            
            if(i==n+1)
                break;
            x=n*y++;
        }
        cout<<x<<endl;
    }
    return 0;
}
