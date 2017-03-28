/*
	Author      : akgarhwal
	Date        : 27-03-2017 10:47:19
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

string arr[501];
int x1,x2,yy1,y2;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
int n,m;

bool seen[501][501]= {{0}};
bool path = false;

bool OK(int x,int y){
	if(x>=n or x<0 or y>m or y<0){
		return false;
	}
	return true;
}

void checkPath(int x,int y){

	if(x == x2 and y == y2){
		path = true;
		return ;
	}
	if(seen[x][y])	return ;

	seen[x][y] = 1;

	for(int i=0; i< 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx == x2 and ny == y2){
			path = true;
			return ;
		}
		if(OK(nx,ny) and arr[nx][ny] == '.' ){
			checkPath(nx,ny);
		}
	}


}



int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	
	cin>>n>>m;
	for(int i=0; i< n; i++){
		cin>>arr[i];
	}

	cin>>x1>>yy1>>x2>>y2;
	x1--;x2--;yy1--;y2--;
	int count=0;
	for(int i=0; i< 4; i++){
		int nx = x2 + dx[i];
		int ny = y2 + dy[i];
		if(OK(nx,ny) and arr[nx][ny] == '.'){
			count++;
		}
	}

	if(x1 == x2 and yy1 == y2){
		if(count){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}	
		return 0;
	}

	int dist = abs(x1-x2)+abs(yy1-y2);
	if((count==1 and dist ==1) or (dist==1 and arr[x2][y2]=='X')){
		cout<<"YES";
		return 0;
	}

	
	

	checkPath(x1,yy1);
	
	if(path){
		
		if(arr[x2][y2] == '.' and count > 1){
			cout<<"YES";
		}
		else if(arr[x2][y2] == 'X' and count){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}




	return 0;
}