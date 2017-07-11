    #include<iostream>
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	do{
    		int a[t+1],b[t+1];
    		for(int i=1;i<=t;i++){
    			cin>>a[i];
    			b[a[i]]=i;
    		}
    		int f=1;
    		for(int i=1;i<=t;i++){
    			if(a[i]!=b[i]){
    				f=0;
    				cout<<"not ambiguous\n";
    				break;
    			}
    		}
    		if(f)
    			cout<<"ambiguous\n";
    	cin>>t;
    	}while(t!=0);
    } 