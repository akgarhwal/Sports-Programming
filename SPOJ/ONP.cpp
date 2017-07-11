    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int tc;
    	cin>>tc;
    	while(tc--){
    		string exp;
    		cin>>exp;
    		stack<char> s;
    		string ans="";
    		for(int i=0;i<exp.size();i++){
    			if(exp[i]>96 and exp[i]<123)
    				ans+=exp[i];
    			else if(exp[i]=='('){
    				s.push(exp[i]);
    			}
    			else if(exp[i]==')'){
    				ans+=(s.top());
    				s.pop();
    				s.pop();
    			}
    			else{
    				s.push(exp[i]);
    			}
    		}
    		cout<<ans<<endl;
    	}
    } 