/*
	Author      : akgarhwal
	Date        : 23-02-2017 20:13:17
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

	string f,l;
	cin>>f>>l;
	int n;
	cin>>n;
	cout<<f<<" "<<l<<endl;
	for(int i=0; i< n; i++){
		string x,y;
		cin>>x>>y;
		if(f == x ){
			cout<<l<<" "<<y<<endl;
			f = l;l = y;
		}
		else if(l == x){
			cout<<f<<" "<<y<<endl;
			f = f;l = y;
		}
		else if(y == f){
			cout<<l<<" "<<x<<endl;
			f  = l;l = x;
		}
		else{
			cout<<f<<" "<<x<<endl;
			f = f;l = x;
		}

	}
	
	return 0;
}