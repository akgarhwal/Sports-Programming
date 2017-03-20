/*
	Author      : akgarhwal
	Date        : 23-02-2017 17:30:49
	Description : Mega Prime
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
bool has_Digit(ll n){
	while(n>0){
		int x = n%10;
		if(x==0 or x==1 or x==4 or x==6 or x==8 or x==9){
			return false;
		}
		n=n/10;
	}
	return true;
}

ll ans=0,root=0,root2=-1;
ll first,last;


bool isPrime(ll n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(!(n%2) or !(n%3))   return false;
    for(ll i=5;i*i<=n;i+=6){
        if(!(n%i) or !(n%(i+2)))  return false;
    }
    return true;
}
ll D[]={2,3,5,7};

void dfs(ll start){
	if((start+root)>last){return ;}
	//cout<<"dfs : "<<start<<endl;//and (start&1)==1
	
	if( (start+root) >= first   and has_Digit(start+root) ){
		cout<<"start : "<<start<<endl;
		// ans++;
		ll did = (start+root)/6ll;
		ll rem = (start+root) - did*6ll;
		if((rem==1 or rem ==5) and isPrime(start+root)){
			ans++;
		}
		if(root2 != -1 and (has_Digit(start+root2)) and (start+root2)<=last){
			did = (start+root2)/6ll;
			rem = (start+root2) - did*6ll;
			if((rem==1 or rem ==5) and isPrime(start+root2)){
				ans++;
			}
		}


	}
	if((start*10ll)+root > last) return ;
	for(int i=0;i<4;i++){
	//	cout<<"going :: "<<x<<endl;
		dfs(start*10+D[i]);

	}

}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	cin>>first>>last;
	//int nod = number_of_Digit(first);
	root = first/1000000000ll;
    //root = root*1000000000ll;
    //cout<<"R1 :: "<<root<<" \tR2 :: "<<root2<<endl;
    if(first >= (ll)1e9 ){
        cout<<"R1 :: "<<root<<" \tR2 :: "<<root2<<endl;
    	int x = root%10ll;
    	if(has_Digit(root) and x != 2){
            root = root*1000000000ll;
    		dfs(0);
    	}
    	else if(has_Digit(root) and x == 2 and last-first == (ll)1e9){
    		root2 = root+1; 
            root = root*1000000000ll;
            root2 = root2*1000000000ll;
            cout<<"R1 :: "<<root<<" \tR2 :: "<<root2<<endl;
    		dfs(0);
    	}
    	else if(has_Digit(root/10) and (x==1 or x==4 or x==6)){
    		root = root+1;
            root = root*1000000000ll;
    		dfs(0);
    	}
    }
    else{
    	dfs(0);
    }
   // cout<<"Starting num : "<<start<<endl;
	// dfs(0);
    if(first <=3) ans+=2;
	cout<<ans;


	return 0;
}