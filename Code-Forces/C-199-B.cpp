/*
	Author      : akgarhwal
	Date        : 08-01-2017 22:04:44
	Description : Xenia
*/

#include <iostream>
using namespace std;

bool isSafe(int x,int l,int r){
	if(l<=x and x<=r){
		return false;
	}
	return true;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m,s,f;
	cin>>n>>m>>s>>f;
	string ans="";
	char keep='X';
	char move;
	int next=0;
	if(s<f){
		move ='R';
		next =1;
	}
	else{
		move ='L';
		next =-1;
	}
	int lt=0;
	int t,l,r,don=s,acc;
	for(int i=0; i< m; i++){
		//cout<<"Kepper "<<don<<endl;
		cin>>t>>l>>r;
		if(t > lt+1){
			
			for(int j=lt+1; j< t; j++){
				ans+=move;
				don =don+next;
				if(don==f){
					break;
				}
			}
		
 		}
		if(don==f){
			break;
		}
		acc = don+next;
		if(isSafe(don,l,r) and isSafe(acc,l,r)){
			don = acc;
			ans += move;
		}
		else{
			ans += keep;
		}
		if(don==f){
			break;
		}
		lt =t;
		
	}
	if(don!=f){
			while(don!=f){
				don =don+next;
				ans+=move;
			}
	}
	cout<<ans<<endl;
	return 0;
}