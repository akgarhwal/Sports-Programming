// author = "akgarhwal"

#include <iostream>
#include <vector>
using namespace std;

vector<int> fun(string s){
	vector<int> v(s.size());
	v[0]=0;
	int d=0;
	for(int i=1; i< s.size(); i++){
		
		while(d>0 and s[i]!=s[d]){
			d = v[d-1];
		}
		if(s[i]==s[d]){
			v[i]=d+1;
		}
		else{
			v[i]=d;
		}
		d = v[i];
	}
	return v; 
}

int main(){
	int t;
	cin>>t;
	int x=1;
	while(t--){
		cout<<"Test case #"<<x++<<endl;
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> v = fun(s);
		for(int i=1; i< s.size(); i++){
			int x = v[i];
			int y = i+1;
			x = y-x;
			if(v[i]!=0 and y%x==0){
				cout<<y<<" "<<y/x<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}