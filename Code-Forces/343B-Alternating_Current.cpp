#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	cin>>str;
	stack<char> st;
	for (int i=0;i<str.size();i++){
		if (st.empty()) {
			st.push(str[i]);
		} else if (str[i] == st.top()) {
			st.pop();
		} else {
			st.push(str[i]);
		}
	}
	if (st.empty()) {
		cout<<"Yes";
	} else {
		cout<<"No";
	}
	return 0;
}
