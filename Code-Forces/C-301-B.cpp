/*
	Author      : akgarhwal
	Date        : 25-03-2017 15:15:37
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

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k,p,x,y;
	cin>>n>>k>>p>>x>>y;
	int a[n+1];
	int sum = 0;
	int count=0;
	for(int i=1; i<=k ; i++){
		cin>>a[i];
		sum += a[i];
		if(a[i]<y){
			count++;
		}

	}
	vi v;
	int marks = x - sum;
	if(marks < (n-k)  or count >= (n+1)/2 ){
		cout<<-1;
	}
	else{
		int mid = (n)/2;
		if(count <= mid){
			while( marks > 0 and count < mid and k<n){
				v.pb(1);
				marks--;
				count++;
				k++;
				//cout<<"Count :: "<<count<<endl;
			}
			if((n-k)*y <= marks){
				for(int i=0; i< sz(v); i++){
					cout<<v[i]<<" ";
				}
				for(int i=0; i< n-k; i++){
					cout<<y<<" ";
				}
			}
			else{
				cout<<-1;
			}

		}
		else{
			cout<<-1;
		}


	}
	return 0;
}