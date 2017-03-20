/*
	Author      : akgarhwal
	Date        : 08-03-2017 17:43:51
	Description : lets generate quards
*/

#include <bits/stdc++.h>
using namespace std;

//return total valid quads using O(n^3)
long long findNumberOfTriangles(vector<int> &v, int n){
    long long count = 0ll;
    for (int i = 0; i < n-3; ++i){
        for (int j = i+1; j < n; ++j){
        	int l = j+2;
        	for(int k=j+1; k< n; ++k){
        		while (l < n && (v[i] + v[j] + v[k]) > v[l]){
               		++l;	//find best position of l
        		}
            	count += l - k - 1;
        	}
        }
    }
    return count;
}

long long total(long long n){
	return (n*(n-1)*(n-2)*(n-3))/24ll;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		long long res=0ll;
		int n;
		cin>>n;
		vector<int> v(n,0);
		for(int i=0; i< n; i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		res = findNumberOfTriangles(v,n);
		long long tot = total((long long)n);
		int gcd = __gcd(tot,res);
		cout<<res/gcd<<"/"<<tot/gcd<<endl;
	}
	return 0;
}