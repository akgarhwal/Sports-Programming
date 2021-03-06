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
		stack<string> fw;
		stack<string> bw;
		string s,cur="http://www.lightoj.com/";
		cin>>s;
		while(s!="QUIT"){
			if(s=="VISIT"){
				bw.push(cur);
				cin>>cur;
				fw=stack<string>();
				cout<<cur<<endl;
			}
			else if(s=="BACK"){
				if(bw.size()==0){
					cout<<"Ignored"<<endl;
				}
				else{
					fw.push(cur);
					cur = bw.top();
					bw.pop();
					cout<<cur<<endl;
				}
			}
			else{
				if(fw.size()==0){
					//ignore
					cout<<"Ignored"<<endl;
				}
				else{
					bw.push(cur);
					cur = fw.top();
					fw.pop();
					cout<<cur<<endl;
				}
			}
			cin>>s;
		}
	}
	return 0;
}