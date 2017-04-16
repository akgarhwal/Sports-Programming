/*
	Author      : akgarhwal
	Date        : 12-04-2017 15:35:24
	Description : 
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long 			ll;
typedef vector<int> 		vi; 
typedef pair<int,int> 		ii; 
#define sz(a) 				int((a).size()) 
#define pb 					push_back 
#define all(c) 				(c).begin(),(c).end() 
#define tr(c,i) 			for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) 		((c).find(x) != (c).end()) 
#define cpresent(c,x) 		(find(all(c),x) != (c).end())  
 
 
class SegmentTree {         // the segment tree is stored like a heap array
private: vector<int> st[500005], A;            // recall that vi is: typedef vector<int> vi;
  int n;
  int left (int p) { return p << 1; }     // same as binary heap operations
  int right(int p) { return (p << 1) + 1; }
public:
 
  void build(int id ,int l,int r ){
 
	if(r - l  == 0){
		st[id].push_back(A[l]);
		return ;
	}
	int mid = (l+r)/2;
	build(2 * id, l, mid);
	build(2*id+1, mid+1, r);
	merge(st[2 * id].begin(), st[2 * id].end(), st[2 * id + 1].begin(), st[2 * id + 1].end(), back_inserter(st[id])); 
	// read more about back_inserter in http://www.cplusplus.com/reference/iterator/back_inserter/
}
	
 
	int query( int cur, int l, int r, int x, int y, int k){
	        if( r < x || l > y ){
	               return 0; //out of range
	      	}
	      	if( x<=l && r<=y ){
	      		int x =st[cur].size() - (lower_bound(st[cur].begin(), st[cur].end(), k) - st[cur].begin());
				return x;	//UUUUUUU
	      	}
	      	int mid=l+(r-l)/2;
	     	return query(2*cur,l,mid,x,y,k)+query(2*cur+1,mid+1,r,x,y,k);
	}
 
 
 
  SegmentTree(const vi &_A) {
    A = _A; n = (int)A.size();              // copy content for local usage
                
    build(1, 0, n-1);  

    // for(int i=0; i< 15; i++){
    // 	cout<<"\n"<<i<<" :: ";
    // 	for(int j=0; j< sz(st[i]); j++){
    // 		cout<<st[i][j]<<" ";
    // 	}
    // }
    // cout<<endl;
    //                                 // recursive build
  }
 
  
 
 
};
 
 
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int tc;
	cin>>tc;
	while(tc--){
		int n,q;
		cin>>n>>q;
		int A[n];
		for(int i=0; i< n; i++){
			cin>>A[i];
		}
		vi a;
		vi U;
		int co=1;
		U.pb(0);
		for(int i=0; i< n-1; i++){
			if(A[i] == A[i+1]){
				co++;
			}
			else{
				a.pb(co);
				co=1;
				U.pb(i+1);
			}
		}
		if(co != 0){
			a.pb(co);
		}
		// cout<<"Array : ";
		// for(int i=0; i< sz(a); i++){
		// 	cout<<a[i]<<" ";
		// }
		// cout<<"\nU array : ";
		
		// for(int i=0; i< sz(U); i++){
		// 	cout<<U[i]<<" ";
		// }
 
		// printf("Start\n");
 
		// cout<<"Start\n";
		SegmentTree st(a);
		// int l,r,k;
		// cin>>l>>r>>k;
 
 
		
 
		for(int i=0; i< q; i++){

			int l,r,k;
			cin>>l>>r>>k;
			l--;r--;
			int X,Y;
			int count=0;
			int x = upper_bound(all(U),l) - U.begin();
			int y = upper_bound(all(U),r) - U.begin();
			x--;
			y--;
			if(x == y){
				if(r-l+1 >=k){
					count++;
				}
			}
			else{
    			if(U[x] == l){
    				X = x;
    			//	cout<<"Mat x";
    			} 
    			else{
    				//checck count
    				
    				if(a[x]-(l-U[x]) >=k ){
    					count++;
    				}
    				// cout<<"Rad :: "<<rad<<"  ";
     
    				X = x+1;
    			}
                Y = y-1;
    			
			
				if(U[y] == r){
					if(k == 1 ){
						count++;
					}
				} 
				else{
					if((r-U[y])+1 >=k ){
						count++;
					}
				}
    			
    		}
			if(x != y)
				cout<<st.query(1,0,sz(a)-1,X,Y,k)+count<<endl;
			else
				cout<<count<<endl;
		}
 
 
 
		
 
	}
	
	return 0;
} 