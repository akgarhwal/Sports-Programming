#include <bits/stdc++.h>
using namespace std;

class PrimeAnagrams {
long m = 1e9;
vector<int> ans;   
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
  void num3(string s){

    for(int i=1; i< s.size()-1; i++){
      for(int j=i+1; j< s.size(); j++){
        string a = s.substr(0,i);
        string b = s.substr(i,j-i);
        string c = s.substr(j,s.size()-j);
        if (a[0] != '0' and b[0] != '0' and c[0] != '0') { 

          int x = stoi(a);
          int y = stoi(b);
          int z = stoi(c);
          if (is_prime(x) and is_prime(y) and is_prime(z)) {

            long ml = x * y *z;
            if (ml < m){
              m = ml;
              ans.clear();
              ans.push_back(x);
	      ans.push_back(y);
              ans.push_back(z);
                            
            }

          } 

        }
      }
    }
  }


  void permutation(string &s, int l, int r) {
    if (l == r) {
      num3(s);
      return ;
    }

    for (int i=l; i < r; i++ ) {
      swap(s[i],s[l]);
      permutation(s,l+1,r);
      swap(s[l],s[i]);
    }
  }
  
  vector<int> primes(string s){
    permutation(s,0,s.size());
    sort(ans.begin(),ans.end());
    return ans;
  }

};
