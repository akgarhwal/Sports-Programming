/*
	Author      : akgarhwal
	Date        : 06-02-2017 09:45:57
	Description : first one
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ull;
typedef vector<int> vi; 
typedef pair<ull,ull> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

vector<ii> dp;
vector<ull> a;
ull l,r,n,temp,A=0,B=0,result=0;


int main(){
	
	scanf("%lld %lld %lld",&n,&l,&r);
	
	for(int i=0; i< n; i++){
		scanf("%lld ",&temp);
		a.pb(temp);
	}
	sort(all(a));
	
	for(int i=1; i< n; i++){
		ull p = a[i-1];
		ull q = a[i];
		dp.pb(make_pair(q-p+1,q+p-1));
	}
	sort(all(dp));
	int sz = sz(dp);
	bool isbreak=false;
	for(int i=0; i< sz; i++){
		A = dp[i].first;
		B = dp[i].second;
		if(A>r)
			isbreak = true;
		if(B<l){
			//just skip it
		}
		else if(A<=l && r<=B){
			result += r-l+1;
			isbreak = true;
		}
		else if(l<=A && A<=r && B>=r){
			result += (r-A+1);
			isbreak = true;
		}
		else if(A<=l && B>=l && B<=r){
			result += (B-l+1);
			l = B+1;
		}
		else if(A>=l && B<=r){
			result += (B-A+1);
			l =B+1;
		}
		if(isbreak){
			break;
		}
	}
	printf("%lld\n",result);
	return 0;
}