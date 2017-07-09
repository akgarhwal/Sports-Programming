#include<bits/stdc++.h>
using namespace std;
long sumOfDivisors(int n){
    if(n==1){
			return 0;    }
	int ans=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ans+=i;
			if(i!=(n/i)){
				ans+=n/i;
			}
		}
	}
	return ans;
}
int main(){
  int tc;
  cin>>tc;
    vector<int> an;
    for(int i=2;i<=100000;i++){
       // cout<<i<<"    "<<sumOfDivisors(i)<<endl;
        int suma = sumOfDivisors(i);
        int sumb = sumOfDivisors(suma);
        if( i > suma and sumb == i and i != suma){
           
                   an.push_back(suma);
          
                    an.push_back(i);
        }
    }
    sort(an.begin(),an.end());
  while(tc--){
    int n;
    cin>>n;
    long long ans=0;
    for(int i=0;an[i]<n and i<an.size();i++)
        ans+=an[i];
    cout<<(ans)<<endl;
  }
  return 0;
}