#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	if (!(n%2) || !(n%3)) return false;
	int x = (int)(sqrt(n)+1e-7);
	for(int i=5;i<=x;i+=6){
		if(!(n%i) or !(n%(i+2)))	return false;
	}
	return true;
}
int no_of_Digit(int n){
    int d=0;
    while(n){
        d++;
        n/=10;
    }
    return d;
}
int nextRotate(int n,int y){
    int d = n%10;
    n=n/10;
    int num =d* (int)pow(10,y-1);
    num+=n;
    return num;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
  int n,f=0,z=0;
  cin>>n;
  for(int i=5;i<n;i+=2){
      f=0;z=i;
      if(isPrime(i)){
          int x=no_of_Digit(i);
          for(int j=0;j<x-1;j++){
              int num = nextRotate(i,x);
              //cout<<z<<"  ----->   "<<num;
              if(!(isPrime(num))){
                  f=1;
                  break;
              }
              i=num;
          }
          if(f==0)
            v.push_back(z);
      }
      i=z;
  }
  long sum=0;
  for(int i=0;i<v.size() and v[i]<n;i++){
      sum+=v[i];
      //cout<<v[i]<<" ";
  }
  cout<<sum;
  return 0;
}