/*
	Author      : akgarhwal
	Date        : 26-02-2017 13:28:33
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

	int n;
	cin>>n;
	int a[6]={0};
	int b[6]={0};
	int x;
	for(int i=0; i< n; i++){
		cin>>x;
		a[x]++;
	}
	for(int i=0; i< n; i++){
		cin>>x;
		b[x]++;
	}
	int ans=1;
	int count=0;
	for(int i=1; i< 6; i++){
		int tot = a[i]+b[i];
		if(tot % 2==0){
			int avg = tot/2;
			count += abs(avg-min(a[i],b[i]));

		}
		else{
			ans = 2;
			break;
		}
	}
	if(ans==1){
		cout<<count/2<<endl;
	}
	else{
		cout<<"-1";
	}
	return 0;
}