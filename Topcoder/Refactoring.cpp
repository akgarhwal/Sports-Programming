#include <bits/stdc++.h>
using namespace std;

class Refactoring {
public:
	int count_factor(int n,int lf) {
		int res = 0;
		for(int i=lf; i*i  <= n ; i++){
			if ( n%i == 0) {
				res += count_factor(n/i, i) + 1;
			}
		}
		return res;
	}
	int refactor(int n) {
		return count_factor(n,2);
	}
};