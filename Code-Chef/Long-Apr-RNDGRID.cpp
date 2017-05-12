/*
	Author      : akgarhwal
	Date        : 16-04-2017 20:16:06
	Description : please update code for full marks
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

int fun(int x,int y,char mat[1000][1000],string s,int n){

	int count=0;
	for(int i=0; i< sz(s); i++){
		

		if(s[i] == 'U'){
			x--;
		}
		else if(s[i] == 'D'){
			x++;
		}
		else if(s[i] == 'L'){
			y--;
		}
		else{
			y++;
		}

		if(mat[x][y] == '#'){
			return count;
		}
		if(x<0 or y<0 or x>=n or y>=n ){
			return count;
		}
		count++;
	}
	return count;
}


int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tc;
	cin>>tc;
	while(tc--){
		int l,n;
		cin>>l>>n;
		string s;
		cin>>s;
		char mat[1000][1000];
		for(int i=0; i< n; i++){
			for(int j=0; j< n; j++){
				cin>>mat[i][j];
			}
		}
		int ans = 0;
		for(int i=0; i< n; i++){
			for(int j=0; j< n; j++){
				int x =0 ;
				if(mat[i][j] == '.'){

					int move = fun(i,j,mat,s,n);
					ans = ans^move;


				}
			}
		}
		cout<<ans<<endl;




	}
	return 0;
}