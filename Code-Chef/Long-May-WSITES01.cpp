/*
	Author      : akgarhwal
	Date        : 07-05-2017 05:51:23
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

set<string> res;

struct Node{
	Node *a[26];
	Node(){
		for(int i=0; i< 26; i++){
			a[i] = NULL;
		}
	}

};



void insert1(Node *root,string s,int i){

	if(i == sz(s)){
		return ;
	}
	if(root->a[s[i]-'a'] != NULL){

		insert1(root->a[s[i]-'a'],s,i+1);

	}
	else{
		//cout<<s[i]<<" ";
		Node *temp = new Node();

		root->a[s[i]-'a'] = temp;
		insert1(temp,s,i+1); 
	}
}

bool ans= false;

void pre(Node *root,string s,int i){

	if(i == sz(s) ){
		ans = true;
		return ;
	}

	if(root->a[s[i]-'a'] == NULL){

		res.insert(s.substr(0,i+1));
		return ;
	}
	else{

		pre(root->a[s[i]-'a'],s,i+1);

	}

}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	vector<string> v;
	Node *root = new Node();

	for(int i=0; i< n; i++){
		char ch;
		string s;
		cin>>ch>>s;
		if(ch == '+')
			insert1(root,s,0);
		else{
			v.pb(s);
		}
	}
	for(int i=0; i< sz(v); i++){
		
		pre(root,v[i],0);


	}
	if(ans){
		cout<<-1<<endl;
	}
	else{

		cout<<sz(res)<<endl;
		auto it = res.begin();
		while(it  !=  res.end()){
			cout<<*it<<endl;
			it++;
		}
	}




	return 0;
}