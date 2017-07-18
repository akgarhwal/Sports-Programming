/*
	Author      : akgarhwal
	Date        : 16-07-2017 20:04:41
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long	ll;
typedef vector<int>	vi;
typedef pair<int,int>	pi;
#define F		first
#define S		second
#define PB		push_back
#define MP		make_pair
#define sz(a)		int((a).size())
#define all(c)		(c).begin(),(c).end()
#define REP(i,a,b)	for(int i = a; i < b; i++)
#define tr(c,i)		for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)	((c).find(x) != (c).end())
#define cpresent(c,x)	(find(all(c),x) != (c).end())
#define MOD		1000000007 	/* 10^9+7*/


int main(){

	int n;
	cin>>n;
	string a="",b="";
	int last=0;
	int sa=0,sb=0;
	while(n--){
		int x;
		cin>>x;
		if(x<0){
			b += to_string(abs(x));
			sb += abs(x);
			last = 2; 
		}
		else{
			last=1;
			sa += x;
			a += to_string(x);
		}
	}
	if(sa > sb){
		cout<<"first";
	}
	else if(sb > sa){
		cout<<"second";
	}
	else{

		if(a>b){
			cout<<"first";
		}
		else if(b>a){
			cout<<"second";
		}
		else{
			if(last==1){
				cout<<"first";
			}
			else{
				cout<<"second";
			}
		}

	}

	return 0;
}