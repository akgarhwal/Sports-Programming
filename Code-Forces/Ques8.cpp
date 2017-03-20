// author = "akgarhwal"

#include <iostream>
using namespace std;

int r[]={-1,0,+1,0};
int c[]={0,-1,0,+1};
int n;

bool visit[100][100];
int mat[100][100];

bool isSafe(int x,int y){
	if(x<0 or y<0 or x>=n or y>=n){
		return false;
	}
	return true;
}

void dfs(int x,int y){
	visit[x][y]=true;
	for(int i=0; i< 4; i++){
		int A = x+r[i],B = y+c[i];
		if(isSafe(A,B) and mat[A][B]==1 and visit[A][B]==false){
				dfs(A,B);
		}
	}

}

int main(){
	
	n = 5;
	int nC=0;
	for(int i=0; i< n; i++){
		for(int j=0; j< n; j++){
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0; j< n; j++){
			if(visit[i][j]==false and mat[i][j]==1){
				cout<<i<<"  "<<j<<endl;
				dfs(i,j);
				nC++;
			}
		}
	}
	cout<<"Ans = "<<nC;
	return 0;
}