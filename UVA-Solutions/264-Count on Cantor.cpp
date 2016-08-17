/*akgarhwal*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		bool up=false;
		int st=1;
		int m=1,x=n;
		while(n>m){
			n=n-m;
			m++;
			if(up)
				up=false;
			else
				up=true;
			st++;
		}
		if(up){
			cout<<"TERM "<<x<<" IS "<<n<<"/"<<st-(n-1)<<endl;
		}
		else{
			cout<<"TERM "<<x<<" IS "<<st-(n-1)<<"/"<<n<<endl;
		}


	}

    return 0;
}
