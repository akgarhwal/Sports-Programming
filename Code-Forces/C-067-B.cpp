/*
	Author      : akgarhwal
	Date        : 26-01-2017 06:50:07
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

	string name;
	cin>>name;
	int n;
	cin>>n;
	string X,Y,T,Z;
	map<string,int> mp;
	for(int i=0; i< n; i++){
		cin>>X>>T;
		if(T=="posted"){
			cin>>Z>>Y>>Z;
			Y = Y.substr(0,(sz(Y))-2);
			if(X==name){
				mp[Y] +=15;
			}
			else if(Y==name){
				mp[X] += 15;
			}
			else{
				mp[X];mp[Y];
			}
			
		}
		else if(T=="commented"){
			cin>>Z>>Y>>Z;
			Y = Y.substr(0,(sz(Y))-2);
			if(X==name){
				mp[Y] +=10;
			}
			else if(Y==name){
				mp[X] += 10;
			}
			else{
mp[X];mp[Y];
			}
		}
		else{
			cin>>Y>>Z;
			Y = Y.substr(0,(sz(Y))-2);
			if(X==name){
				mp[Y] +=5;
			}
			else if(Y==name){
				mp[X] += 5;
			}
			else{
				mp[X];mp[Y];
			}
		}
	}
	vector<pair<int,string> > st;
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
                st.push_back(make_pair(-it->second, it->first));
    sort(all(st));
	for(vector<pair<int,string> >::iterator it = st.begin();it!=st.end();it++){
		if((*it).second != name)
			cout<<(*it).second<<endl;
	}
	return 0;
}