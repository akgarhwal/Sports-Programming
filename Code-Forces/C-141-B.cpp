/*
	Author      : akgarhwal
	Date        : 08-01-2017 21:15:31
	Description : Two tables
*/

#include <iostream>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int na,ma,mb,nb;
    cin>>na>>ma;
    char a[na][ma];
    for(int i=0; i< na; i++){
    	for(int j=0; j< ma; j++){
    		cin>>a[i][j];
    	}
    }
    cin>>nb>>mb;
    char b[nb][mb];
    for(int i=0; i< nb; i++){
    	for(int j=0; j< mb; j++){
    		cin>>b[i][j];
    	}
    }
    int X=0,Y=0;
    int ans=0;
    for(int x=-50; x<= 50; x++){
    	//cout<<"X = "<<x<<endl;
    	for(int y=-50; y<=50 ; y++){
    		int temp=0;
    		for(int i=0; i< na; i++){
    			for(int j=0; j< ma; j++){
    				int p = i+x;
    				int q = j+y;
    				if(p>=0 and p<nb and q>=0 and q<mb){
    					if(a[i][j] == b[p][q] and a[i][j]=='1'){
    						temp++;
    					}
    				}
    			}
    		}
    		if(temp>ans){
    			X=x;Y=y;
    			ans = temp;
    		}
    	}
    }
    cout<<X<<" "<<Y<<endl;
	return 0;
}