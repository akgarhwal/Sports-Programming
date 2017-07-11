#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	if (!(n%2) || !(n%3)) return false;
	int x = (int)(sqrt(n)+1e-7);
	for(int i=5;i<=x;i+=6){
		if(!(n%i) or !(n%(i+2)))	return false;
	}
	return true;
}
int fun(int a,int b){
    int n=0,count=0;
    while(true){
        long long int x=(n*n+a*n+b);
        if(isPrime(x)){
            n++;
        }
        else{
            break;
        }
    }
    return n;
}
int main(){
  int N;
  cin>>N;
  int x=1,y=1;
  int maxp=0;int NP=0;
  for(int a=1;a<=N;a++){
      for(int b=1;b<=N;b++){
          NP = fun(-a,b); 
          if(NP>maxp){
              x=-a;
              y=b;
              maxp=NP;
          }
         // cout<<maxp<<" A="<<a<<" \n";
           NP = fun(a,b); 
          if(NP>maxp){
              x=a;
              y=b;
              maxp=NP;
          }
          
          NP = fun(a,-b); 
          if(NP>maxp){
              x=a;
              y=-b;
              maxp=NP;
          }
      }
  }
  cout<<x<<" "<<y;
  return 0;
}
