/*
	Author      : akgarhwal
	Date        : 19-01-2017 21:01:00
	Description : 
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

	ll n,m,k,x,y;
	cin>>n>>m>>k>>x>>y;
	//cout<<"Helkljfdkllo\n";
	
	//cout<<n<<" "<<m<<" "<<y;
	ll tot = n*m;
	ll mi=0,mx=0,ans=0;
	if(n==1){
		mi = k/tot;
		mx = mi;
		ans = mi;
		k =k%tot;
		for(int i=0; i< k; i++){
		  	
		  	if(y-1==i){
		  		ans++;
		  	}
		 }  
		cout<<(mx+(k>0?1:0))<<" "<<mi<<" "<<ans;
		return 0;
	}
	bool isFRC = false;
	if(x==1 or x==n){
		isFRC = true;
	}
	bool ok=true;
	if(k>=tot){
		ok=false;
		mi = 1;
		mx = mi;
		k = k-tot;
		ans=mi;
		ll tot2 = 2*tot-(2*m);
		if(k>=tot2){
			 ll mul = 2;
			 if(n==2){
			 	mul=1;
			 }
			 mx += (k/tot2)*mul;
			 mi += (k/tot2);
			 if(isFRC){
			 	ans += (k/tot2);

			 } 
			 else{
			 	ans += (k/tot2)*mul;
			 }
			 k = k%tot2; 
		}
	}
	

	
	

	


	
	ll tot3 = tot - (m);
	// if(k>=tot3){
	// 	mx += 
	// }
	ll MX = mx;
	if(k>0 and ok==false){
		mx+=1;
		int rn = n-2;
		for(int i=rn; i>=0 ; i--){
		 	for(int j=0; j< m; j++){
		 		k--;
		 		
		 		if(x-1==i and y-1==j){
		 			ans++;
		 		}
		 		if(k<=0){
		 			break;
		 		}
		 	}
		 	if(k<=0){
		 		break;
		 	}
		 } 
	
	}
	if(k>0){
		mx+=(n==2?0:1);
		int rn = (ok==false?1:0);
		if(n==2){
			n++;
		}
		for(int i=rn; i<n ; i++){
		 	for(int j=0; j< m; j++){
		 		k--;
		 		if(x-1==i and y-1==j){
		 			ans++;
		 		}
		 		if(k<=0){
		 			break;
		 		}
		 	}
		 	if(k<=0){
		 		break;
		 	}
		 } 
	}
	cout<<max(max(mx,1ll),ans)<<" "<<mi<<" "<<ans;


	return 0;
}