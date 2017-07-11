#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int x,ans=0;
    for(int i=0;i<n;i++){
        scanf("%d\n",&x);
        ans = ans^x;
    }
    printf("%d",ans);
    return 0;
}
