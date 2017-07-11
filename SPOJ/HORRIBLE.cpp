#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;

typedef vector<long long> vi;
typedef long long ll;
class SegmentTree {         // the segment tree is stored like a heap array
private: vi st, A,lazy;            // recall that vi is: typedef vector<ll> vi;
  ll n;
  ll left (ll p) { return p << 1; }     // same as binary heap operations
  ll right(ll p) { return (p << 1) + 1; }

  void build(ll p, ll L, ll R) {                           // O(n log n)
    if (L == R)                            // as L == R, either one is fine
      st[p] = A[L];                                         // store the index
    else {                                // recursively compute the values
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      ll p1 = st[left(p)], p2 = st[right(p)];
      st[p] = (p1 + p2) ;
  } }

  // ll rmq(ll p, ll L, ll R, ll i, ll j) {                  // O(log n)
  //   if (i >  R || j <  L) return -1; // current segment outside query range
  //   if (L >= i && R <= j) return st[p];               // inside query range
  //
  //    // compute the min position in the left and right part of the llerval
  //   ll p1 = rmq(left(p) , L              , (L+R) / 2, i, j);
  //   ll p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);
  //
  //   if (p1 == -1) return p2;   // if we try to access segment outside query
  //   if (p2 == -1) return p1;                               // same as above
  //   return (p1+p2); }          // as as in build routine

  ll update_poll(ll p, ll L, ll R, ll idx, ll new_value) {
    // this update code is still preliminary, i == j
    // must be able to update range in the future!
        ll i = idx, j = idx;

    // if the current llerval does not llersect
    // the update llerval, return this st node value!
    if (i > R || j < L)
      return st[p];

    // if the current llerval is included in the update range,
    // update that st[node]
    if (L == i && R == j) {
      A[i] = new_value; // update the underlying array
      return st[p] = A[L]; // this index
    }

    // compute the minimum pition in the
    // left and right part of the llerval
    ll p1, p2;
    p1 = update_poll(left(p) , L              , (L + R) / 2, idx, new_value);
    p2 = update_poll(right(p), (L + R) / 2 + 1, R          , idx, new_value);

    // return the pition where the overall minimum is
    return st[p] = (p1 + p2) ;
  }

void updateRange(ll node, ll start, ll end, ll l, ll r, ll val)
{
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        st[node] += (end - start + 1) * lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }
    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        st[node] += (end - start + 1) * val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    ll mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    st[node] = st[node*2] + st[node*2+1];        // Updating root with max value
}

ll rmq(ll node, ll start, ll end, ll l, ll r)
{
    if(start > end or start > r or end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        st[node] += (end - start + 1) * lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];         // Mark child as lazy
            lazy[node*2+1] += lazy[node];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return st[node];
    ll mid = (start + end) / 2;
    ll p1 = rmq(node*2, start, mid, l, r);         // Query left child
    ll p2 = rmq(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2);
}

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (ll)A.size();              // copy content for local usage
    st.assign(4 * n, 0);
    lazy.assign(4*n, 0);            // create large enough vector of zeroes
    build(1, 0, n - 1);                                  // recursive build
  }

  ll rmq(ll i, ll j) { return rmq(1, 0, n - 1, i, j); }   // overloading

  ll update_poll(ll idx, ll new_value) {
    return update_poll(1, 0, n - 1, idx, new_value); }
    void updateRange(ll i,ll j, ll new_value) {
       updateRange(1, 0, n - 1, i,j, new_value); }
};

int main() {
  ll tc;
  cin>>tc;
  while(tc--){
      ll n,c;
      cin>>n>>c;
  vi A(n,0);
  SegmentTree st(A);
while(c--){
    ll x,p,q,v;
    cin>>x;
    if(x==0){
        cin>>p>>q>>v;
        st.updateRange(p-1, q-1,v);
    }
    else{
        cin>>p>>q;
        printf("%lld\n", st.rmq(p-1, q-1));
    }

    }
}
  return 0;
}
