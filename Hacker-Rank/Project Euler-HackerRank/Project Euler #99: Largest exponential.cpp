#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<double> test;
    map<double,pair<int,int> >m;
    while(n--){
        int b,e;
        cin>>b>>e;
        m.insert(make_pair(e*log(b),pair<int,int>(b,e)));
        test.push_back(e*log(b));
    }
    int k;
    cin>>k;
    sort(test.begin(),test.end());
    pair<int,int> ans = m[test[k-1]];
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}
