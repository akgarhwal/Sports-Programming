#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	stack<int> st;
	int ans = -1e9;
	for (int i = 0,x; i < n; ++i)
	{
		cin>>x;
		while (!st.empty()) {
			int top = st.top();
			ans = max(ans,top^x);
			//cout<<top<<" ^ "<<x<<endl;
			if (top < x){
			    st.pop();
			}else{
				break;
			}
		}
		st.push(x);
	}
	cout<<ans;
	return 0;
}
