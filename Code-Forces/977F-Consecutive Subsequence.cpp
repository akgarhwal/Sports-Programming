#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n+5,0);
	for (int i = 1; i <= n; ++i) {
		cin>>a[i];
	}
	map<int,int> mp;
	int ans = 0,ele;
	for (int i = 1; i <= n; ++i){	
		mp[a[i]] = max(mp[a[i]],mp[a[i]-1]+1);
		if (ans < mp[a[i]]) {
			 ele = a[i];
			 ans = mp[a[i]];
		}
	}
	cout<<ans<<endl;
	vector<int> res(ans,0);
	for (int i = n; i >0 ; --i){
		if (a[i] == ele){
			res[--ans] = i;
			ele--;
		}
	}
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<" ";
	}


	return 0;
}