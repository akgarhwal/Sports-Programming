#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return false;
    if (n == 2)
        return true;
       if (n == 3)
           return true;
       if (n % 2 == 0 )
           return false;
       if (n % 3 == 0 )
           return false;
          
   int i = 5;
   int w = 2;
   while (i * i <= n)
   {
      if( n % i == 0)
         return false;

      i += w;
      w = 6 - w;
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int i=11;
    long long sum=0;
    while(i<n){
        int x=i;
        if(isPrime(i)==true){
            int a=0,f=0;
            int z=0,y=0;
            while(x>10){
                y=(x%10)*pow(10,a++)+y;
                if(isPrime(y)==true){    
                }
                else{
                    f=1;
                    break;
                }
                z=x/10;
                if(isPrime(z)==true){  
                }
                else{
                    f=1;
                    break;
                }
                x=z;
            }
            if(f==0){
                sum+=i;
            }
        }
        i=i+2;
    }
     cout<<sum<<endl;  
    return 0;
}
