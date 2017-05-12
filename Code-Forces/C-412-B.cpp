/*
	Author      : akgarhwal
	Date        : 07-05-2017 21:01:42
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  

bool isOK(int s,int r){

	int x = (s/50)%475;
	for(int i=0; i< 25; i++){
		x = (x*96 + 42) % 475;
		if(x+26 == r){
			return true;
		}
	}
	return false;

}
int rk,cs,ds;


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	
	cin>>rk>>cs>>ds;

	int ans = 0;
	int s = cs;
	while(s>=ds){
		if(isOK(s,rk)){
			cout<<0<<endl;
			exit(0);
		}
		s -= 50;
	}
	s=cs;
	while(!(isOK(s,rk))){
		s+=50;
	}
	ans = ceil((s-cs)/100.0);

	cout<<ans<<endl;






	
	return 0;
}