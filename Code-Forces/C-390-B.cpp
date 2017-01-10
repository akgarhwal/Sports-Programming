/*
	Author      : akgarhwal
	Date        : 06-01-2017 19:54:10
	Description : lets try second
*/

#include <iostream>
using namespace std;

bool isValid(int c,int d,int e,int f){
	if(c<0 or c>3 or d<0 or d>3 or e<0 or e>3 or f<0 or f>3){
		return false;
	}
	return true;
}

int main(){
	char a[4][4];
	for(int i=0; i< 4; i++){
		for(int j=0; j< 4; j++){
			cin>>a[i][j];
		}
	}
	bool win=false;
	int m[8][6];
	m[0][0] = 0;
	m[0][1] = 0;
	m[0][2] = 0;
	m[0][3] = 1;
	m[0][4] = 0;
	m[0][5] = 2;

	m[1][2] = 0;
	m[1][3] = -1;
	m[1][4] = 0;
	m[1][5] = -2;
	
	m[2][2] = 1;
	m[2][3] = 0;
	m[2][4] = 2;
	m[20][5] = 0;

	m[3][2] = -1;
	m[3][3] = 0;
	m[3][4] = -2;
	m[3][5] = 0;

	m[4][2] = 1;
	m[4][3] = 1;
	m[4][4] = 2;
	m[4][5] = 2;

	m[5][2] = -1;
	m[5][3] = -1;
	m[5][4] = -2;
	m[5][5] = -2;

	m[6][2] = -1;
	m[6][3] = 1;
	m[6][4] = -2;
	m[6][5] = 2;

	m[7][2] = 1;
	m[7][3] = -1;
	m[7][4] = 2;
	m[7][5] = -2;


	for(int i=0; i< 4; i++){
		for(int j=0; j< 4; j++){
			int x=i,y=j;
			for(int z=0; z< 8; z++){
				int c,d,e,f;
				c = x+m[z][2];
				d = y+m[z][3];
				e = x+m[z][4];
				f = y+m[z][5];
				if(isValid(c,d,e,f)){
					int X=0,O=0;
					if(a[i][j]=='x'){
						X++;
					}
					if(a[x][y]=='.'){
						O++;
					}
					if(a[c][d]=='x'){
						X++;
					}
					if(a[c][d]=='.'){
						O++;
					}
					if(a[e][f]=='x'){
						X++;
					}
					if(a[e][f]=='.'){
						O++;
					}
					if(X==2 and O==1){
						cout<<"YES";
						return 0;
					}
				}
				//a = x+m[x][2];

			}
		}
	}
	cout<<"NO";
	return 0;
}