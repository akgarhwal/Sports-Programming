#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int counter = 1;
	while (str[0] != '-'){
		int ans = 0;
		stack<char> st;
		for (int i=0;i<str.size();i++){
			if (str[i] == '{') {
				st.push(str[i]);
			} else if (str[i] == '}' and !(st.empty()))  {
				st.pop();
			} else if(str[i] == '}') {
				st.push('{');
				ans += 1;
			}
		}
		ans += st.size() / 2;
		cout<< counter<<". "<<ans<<endl;
		counter += 1;
	}
	return 0;
}
