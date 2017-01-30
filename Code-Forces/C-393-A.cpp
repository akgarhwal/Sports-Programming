/*
	Author      : akgarhwal
	Date        : 22-01-2017 23:19:05
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

	int mon[]= {31,28,31,30,31,30,31,31,30,31,30,31};
	int m,d;
	cin>>m>>d;
	int D = mon[m-1];
	int co=0;
	while(D>0){
		if(d!=1){
			D = D-(8-d);
			d=1;
		} 
		else{
			D =D-7;
		}
		co++;
	}
	cout<<co<<endl;
	return 0;
}