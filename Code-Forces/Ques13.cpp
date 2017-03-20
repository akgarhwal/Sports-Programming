// author = "akgarhwal"

#include <iostream>
using namespace std;
int m[][3]={ 0,0,0,
			0,0,0,
			0,0,0};

int now(int x,int y){
	
	if(x==0 and y==0){
		return 1-m[x][y];
	}
	else if(x<0 or y<0){
		return 0;
	}
	else if(m[x][y]){
		return 0;
	}
	else return (now(x-1,y)+now(x,y-1));
}

int main(){
	cout<<now(2,2);
	return 0;
}