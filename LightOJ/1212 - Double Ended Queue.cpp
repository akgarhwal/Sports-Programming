/*       _                    _                  _ 
    __ _| | ____ _  __ _ _ __| |____      ____ _| |
   / _` | |/ / _` |/ _` | '__| '_ \ \ /\ / / _` | |
  | (_| |   < (_| | (_| | |  | | | \ V  V / (_| | |
   \__,_|_|\_\__, |\__,_|_|  |_| |_|\_/\_/ \__,_|_|
             |___/                                 		

When I wrote this, only God and I understood what I was doing
Now, God only knows												*/

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define S(t) scanf("%d",&t)
#define S2(x,y) scanf("%d %d",&x,&y)
#define SL(t) scanf("%lld",&t)
#define P(t) printf("%d ",t)
#define PL(t) printf("%lld ",t)
#define NL printf("\n");
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define rer(i,l,n) for(int (i)=(int)(l);(i)<=(int)(n);++(i))

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<long long> vl;

int main(){
	int tc,cs=0;
	S(tc);
	while(tc--){
		cout<<"Case "<<++cs<<":\n";
		int n,Q,x;
		S2(n,Q);
		deque<int> q;
		string s;
		while(Q--){
			cin>>s;
			if(q.size()==n and (s=="pushLeft" or s=="pushRight")){
				cout<<"The queue is full"<<endl;
				cin>>x;
			}
			else if(q.size()==0 and (s=="popLeft" or s=="popRight")){
				cout<<"The queue is empty\n";
			}
			else if(s=="pushLeft"){
				cin>>x;
				q.push_front(x);
				cout<<"Pushed in left: "<<x<<endl;
			}
			else if(s=="pushRight"){
				cin>>x;
				q.push_back(x);
				cout<<"Pushed in right: "<<x<<endl;
			}
			else if(s=="popLeft"){
				cout<<"Popped from left: "<<q.front()<<endl;
				q.pop_front();
			}
			else if(s=="popRight"){
				cout<<"Popped from right: "<<q.back()<<endl;
				q.pop_back();
			}
		}
		
	}
	return 0;
}