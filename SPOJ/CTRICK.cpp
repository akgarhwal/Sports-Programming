/*
	Author      : akgarhwal
	Date        : 23-02-2017 12:14:21
	Description : Ctrick
*/

//roshan.16876@lpu.co.in
//Project Name.reg no,rool no,name
//tinyurl.com/zjdl2gu

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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi a(n,0);
		int nz=n;
		int last =0;
		for(int i=1; i<=n; i++){
			int zero = i+1;
			if(zero>(nz)){
				zero = zero%nz;
				if(zero==0){
					zero=nz;
				}
			}
			int co=0;
			int pos = (last)%n;
		//	cout<<i<<" : "<<pos<<"  :: "<<zero<<endl;
			while(co <= zero){
				if(a[pos]==0){
					co++;
				}
				if(co==zero)	break;
				pos++;
				if(pos>=n)
					pos = pos%n;
			}
		//	cout<<i<<" : "<<pos<<endl<<co<<endl<<endl;
			nz--;
			a[pos]=i;
			last = pos;
		}
		for(int i=0; i< n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}