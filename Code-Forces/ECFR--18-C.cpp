/*
	Author      : akgarhwal
	Date        : 27-03-2017 20:58:41
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

pair<int,int> callforone(string s){
	//for 1
	for(int i=sz(s)-1; i>=0 ; i--){
		if(s[i] == '1' or s[i] == '4' or s[i] == '7'){
			return {i,-1};
		}
	}
	int pos=-1;
	for(int i=sz(s)-1; i>=0 ; i--){
		if(s[i] == '2' or s[i] == '5' or s[i] =='8' and pos ==-1){
			pos  = i;
		}
		else if(s[i] == '2' or s[i] == '5' or s[i] =='8' and pos != -1){
			return {i,pos};
		}

	}
	return {-1,-1};
}

pair<int,int> callfortwo(string s){
	//for 1
	for(int i=sz(s)-1; i>=0 ; i--){
		if(s[i] == '2' or s[i] == '5' or s[i] == '8'){
			return {i,-1};
		}
	}
	int pos=-1;
	for(int i=sz(s)-1; i>=0 ; i--){
		if((s[i] == '1' or s[i] == '4' or s[i] =='7') and pos ==-1){
			pos  = i;
		}
		else if((s[i] == '1' or s[i] == '4' or s[i] =='7') and pos != -1){
			return {i,pos};
		}

	}
	return {-1,-1};
}



int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string s;
	cin>>s;
	int sum=0;
	int n = sz(s);
	for(int i=0; i< n; i++){
		sum  += (s[i]-'0');
	}
	if(sum%3==0){
		cout<<s<<endl;
		return 0;
	}
	//cout<<sum<<endl;
	if(sum%3==1){
		//cout<<"for 1\n";
		vector<char> v(sz(s));
		ii pos = callforone(s);
		//cout<<"Return from fun\n";
		if(pos.first ==-1 and pos.second == -1){
			cout<<-1;
			return 0;
		}
		else if(pos.second  == -1){
		//	cout<<"one pos :: "<<pos.first<<endl;
			int x=0;
			for(int i=0; i< sz(s); i++){
				if(i != pos.first){
					v[x++] = s[i];
				}
			}
			if(x==0){
				cout<<-1;
				return 0;
			}
			if(x == 1){
				cout<<v[0]<<endl;
				return 0;
			}
			int z=0;
			while(v[z]=='0'){
				z++;
			}
			if(x == z){
				cout<<0<<endl;
				return 0;
			}
			string temp(v.begin()+z,v.begin()+x);
			cout<<temp;
			return 0;
		}
		else{
		//	cout<<"two pos\n";
			int x=0;
			for(int i=0; i< sz(s); i++){
				if(i != pos.second and i != pos.first ){
					v[x++]  = s[i];
				}
			}
			if(x==0){
				cout<<-1;
				return 0;
			}
			if(x == 1){
				cout<<v[0]<<endl;
				return 0;
			}
			int z=0;
			while(v[z] == '0'){
				z++;
			}
			if(x == z){
				cout<<0<<endl;
				return 0;
			}
			string temp(v.begin()+z,v.begin()+x);
			cout<<temp;
			return 0;
		}
	}
	else{
	//	cout<<"for 2\n";
		vector<char> v(sz(s));
		ii pos = callfortwo(s);
		//cout<<"F :: "<<pos.first<<" \t S :: "<<pos.second<<endl;
		if(pos.first ==-1 and pos.second == -1){
			cout<<-1;
			return 0;
		}
		else if(pos.second  == -1){
		//	cout<<"F\n";
			int x=0;
			for(int i=0; i< sz(s); i++){
				if(i != pos.first){
					v[x++] = s[i];
				}
			}
			if(x==0){
				cout<<-1;
				return 0;
			}
			if(x == 1){
				cout<<v[0]<<endl;
				return 0;
			}
			int z=0;
			while(v[z]=='0'){
				z++;
			}
			if(x == z){
				cout<<0<<endl;
				return 0;
			}
			string temp(v.begin()+z,v.begin()+x);
			cout<<temp;
			return 0;
		}
		else{
			//cout<<"H\n";
			int x=0;
			for(int i=0; i< sz(s); i++){
				if(i != pos.second and i != pos.first ){
					v[x++]  = s[i];
				}
			}
			if(x==0){
				cout<<-1;
				return 0;
			}
			if(x == 1){
				cout<<v[0]<<endl;
				return 0;
			}
			int z=0;
			while(v[z] == '0'){
				z++;
			}
			if(x == z){
				cout<<0<<endl;
				return 0;
			}
			string temp(v.begin()+z,v.begin()+x);
			cout<<temp;
			return 0;
		}
	}

	return 0;
}