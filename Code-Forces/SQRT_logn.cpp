/*
	Author      : akgarhwal
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

int upper_Bound(int a[],int n,int ele){
	int st = 0,end = n-1;
	while(st <= end){
		int mid = (st+end)>>1;
		if(a[mid] > ele){
			end = mid-1;
		}
		else{
			st = mid+1;
		}
	}
	return end;
}
int lower_Bound(int a[],int n,int ele){
	int st = 0,end = n-1;
	while(st <= end){
		int mid = (st+end)>>1;
		if(a[mid] >= ele){
			end = mid-1;
		}
		else{
			st = mid+1;
		}
	}
	return st;
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a[] = {5,7,7,8,8,10};
	int x = lower_Bound(a,6,8);
	if(A[x]!=8)
	
	return 0;



1001
1010
-----
1000
0111
-----
0
