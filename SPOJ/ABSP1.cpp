// author = "akgarhwal"

#include <iostream>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		int a[n-1];
		int x,y,c=0;
		cin>>x;
		for(int i=1; i< n; i++){
			cin>>y;
			a[i-1] = y-x;
		}
		long long ans = 0;
		n = n-1;
		for(int i=0; i< n-1; i++){
			ans += (i+1)*1LL*a[i];
			ans -= (n-i-1)*1LL*a[i];
		}
		ans += n*a[n-1];
		cout<<ans<<endl;
	}
	return 0;
}