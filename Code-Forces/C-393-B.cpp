/*
	Author      : akgarhwal
	Date        : 22-01-2017 23:19:39
	Description : lets try
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m,k;
	cin>>n>>m>>k;
	if(n==1){
		cout<<m<<endl;
		return 0;
	}
	int ans=1;
	m=m-n;
	int L=0,R=0,l=k,r=k;
	while(m>0){

		if(l>1 and r<n and  m >= (L+R+1)){
			ans++;
			l--;r++;
			m = m-(L+R+1);L++;R++;
			//cout<<" First M = "<<m<<endl;
		}
		else if(l<=1 and r<n and m>= (R+1+L)){
			ans++;
			m = m-(R+1+L);
			R++;
			r++;
			//cout<<" Second M = "<<m<<endl;
		}
		else if(r>=n and l>1 and m>=(L+1+R)){
			ans++;
			l--;
			//cout<<" third M = "<<m<<endl;
			m = m-(L+1+R);
			L++;
			//cout<<" third M = "<<m<<endl;
		}
		else if(l<=1 and r>=n){
			int C = m/(L+R+1);
			ans+=C;
			//cout<<" Fourth M = "<<m<<endl;
			break;
		}
		else{
			break;
		}

	}
	cout<<ans<<endl;

	return 0;
}