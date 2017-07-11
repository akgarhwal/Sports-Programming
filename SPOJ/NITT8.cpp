// author = "akgarhwal"


#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
	
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		ll a[n];
		for(int i=0; i< n; i++){
			cin>>a[i];
		}
		ll ans=0LL;
		int l=0,r=n-1;
		while(l<r){
			ans = max(ans,min(a[l],a[r])*1LL*(r-l));
			if(a[l]<=a[r]){
				l++;
			}
			else{
				r--;
			}
		}
		cout<<ans<<"\n";
	}


	return 0;
}

