/*
	Author      : akgarhwal
	Date        : 04-05-2017 19:56:57
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

	int n;
	cin>>n;
	int i=0;
	string s = "";
	while(n--){
		if(i==0){
			s+='a';
			i++;
		}
		else if(i==1){
			s+='a';
			i++;
		}
		else if(i==2){
			s+='b';
			i++;
		}
		else if(i==3){
			s+='b';
			i++;
		}
		i = i%4;

	}
	cout<<s<<endl;
	return 0;
}