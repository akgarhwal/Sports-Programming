/*
	Author      : akgarhwal
	Date        : 31-01-2017 20:18:35
	Description : 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
bool IsSubString(string s1, string s2)
{
   int len1 = s1.length();
   int len2 = s2.length();
   if(len1 < len2)
   {
     for(int i =0 ; i < len2-len1+1; i++)
     {
        if(s1.compare(s2.substr(i,len1)) == 0)
          return true;
     }
   }
   return false;
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,l;
	cin>>n>>l;
	string A="",B="";
	int st=0;
	cin>>st;
	int Y=st;
	for(int i=1; i< n; i++){
		int x;
		cin>>x;

		if(x!=0){
			A+=(char)(x-st+48);
			st=x;
		}
	}

	A+=(char)(l-st+Y+48);
	st=0;
	cin>>st;
	Y=st;
	for(int i=1; i< n; i++){
		int x;
		cin>>x;
		if(x!=0){
			B+=(char)(x-st+48);
			st=x;
		}
		

	}
	B+=(char)(l-st+Y+48);
    
    A = A+A;
   //cout<<A<<" "<<B;
    if(IsSubString(B,A)){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
	return 0;
}