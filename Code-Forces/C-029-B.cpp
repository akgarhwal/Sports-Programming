/*
	Author      : akgarhwal
	Date        : 30-01-2017 10:35:31
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

	int l,d,v,g,r;
	cin>>l>>d>>v>>g>>r;
	int tgr = g+r;
	int s=l-d;
	int ns = d/v;
	int x = ns%tgr;
	if(x<g){
		printf("%.9lf\n",(double)l/v);
	}
	else{
		double T = ns+(tgr-x)+(double)s/v;
		printf("%.9lf\n", T);
	}
	return 0;
}