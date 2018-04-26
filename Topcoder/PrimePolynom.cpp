#include <iostream>
#include <math.h>
using namespace std;

class PrimePolynom{
 	public:
    bool is_prime(long long num) {
      if (num <= 1) {
        return false;
      }
      if (num <= 3) {
        return true;
      }
      if ( !((num%2) and (num%3)) ) {
        return false;
      }
      long long lim = sqrt(num);
      for (int i = 5; i <= lim; i+=6) {
        if ( !((num%i) and (num%(i+2))) ) {
          return false;
        }
      }
      return true; 
    }
    int reveal(int A,int B,int C) {
    	int m = -1;
        long long num;
        do {
             m += 1;
            num = A*m*m + B*m + C;
        } while((is_prime(num)));
        return m;
    }
    
};
