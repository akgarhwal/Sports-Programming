/*
	Author      : akgarhwal
	Date        : 26-02-2017 17:59:57
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

string s,t;
int a[200005];
bool check(int mid){
	int allow[sz(s)];
	for(int i=0; i< sz(s); i++){
		allow[i]=1;
	}
	for(int i=0; i<= mid; i++){
		allow[a[i]]=0;
	}
	int p=0;
	for(int i=0; i< sz(s); i++){
		if(allow[i]){
			if(s[i]==t[p]){
				p++;
			}
		}
	}
	if(p==sz(t)){
		return true;
	}

	return false;
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	cin>>s>>t;
	for(int i=0; i< sz(s); i++){
		cin>>a[i];
		a[i]--;
	}
	int low = 0,high = sz(s)-1;
	while(low <= high){
		//cout<<"low :: "<<low<<" \t High :: "<<high<<endl;
		int mid = (low+high)/2;
		if(check(mid)){
			low = mid+1;
		}
		else{
			high = mid-1;
		}

	}
	cout<<low<<endl;
	return 0;
}