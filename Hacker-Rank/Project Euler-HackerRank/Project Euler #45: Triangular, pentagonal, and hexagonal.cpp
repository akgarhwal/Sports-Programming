#include<bits/stdc++.h>
using namespace std;
void penNumberTRI(long long int n){
    long long int x=1;
    long long int z,t=(x*(3*x-1))>>1;
    while(t<n){
       // pen.insert(t);
        z=int(-1+sqrt(1+8*t))>>1;
        if(t==((z*(z+1))>>1))
                cout<<t<<endl;
        x++;
        t=(x*(3*x-1))>>1;
    }
}
void penNumber(long long int n){
    long long int x=1;
    long long int t=(x*(2*x-1));
    while(t<n){
        long long int z = (1 + int(sqrt(24*t + 1)));
        
        if((z-1)*(z-1)== (24*t + 1) and z%6==0){
          
            cout<<t<<endl;
        }
        x++;
        t=(x*(2*x-1));
    }
}
int main(){
  int a,b;
  long long int n;
  cin>>n>>a>>b;
  if(a==3 and b==5){
      penNumberTRI(n);
  }
  else{
      penNumber(n);
  }
  return 0;
}