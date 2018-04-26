#include <bits/stdc++.h>
using namespace std;

class DivisorInc {

public:
  vector<int> divisor(int n){
    vector<int> res;
    for (int i=2; i*i <= n; i++ ) {
      if (n%i == 0) {
        res.push_back(i);
        if (i != n/i) {
          res.push_back(n/i);
        }
      }
    }
    return res;
  }

  
  int countOperations(int n, int m) {
    vector<int> dist(1e5+5,-1);
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
      int x = q.front(); q.pop();
      vector<int> div = divisor(x);
      for (int i=0;i<div.size();i++) {
        int y = x + div[i];
        if (y > 1e5) continue;
        if (dist[y] > 0) continue;
        dist[y] = dist[x] + 1;
        q.push(y);
      }
    }
    return dist[m];
  }

};
