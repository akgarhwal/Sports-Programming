/*
	Author      : akgarhwal
	Date        : 09-04-2017 00:53:34
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

int main()
{ 
      int t,z=1,y,n,k,ans;
      cin>>t;
      while(t--){
      priority_queue<int>p;
      int run;
      cin>>n>>k;
      p.push(n);
      for(int i=0;i<k-1;i++){
              y=p.top();
              p.pop();
                  if(y%2!=0)
                  {
                      p.push(y/2);
                      p.push(y/2);
                  }
                  if(y%2==0)
                  {
                      p.push(y/2);
                      p.push(y/2 - 1);                  
                  }
       }
              ans=p.top();
              if(ans%2!=0)
              {
                  printf("Case #%d: %d %d\n",z,ans/2,ans/2);
              }
              if(ans%2==0)
              {
                  printf("Case #%d: %d %d\n",z,ans/2,ans/2 - 1);
              }
              z++;
          }
}