/*
	Author      : akgarhwal
	Date        : 07-02-2017 22:28:38
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
int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }
bool findNumberOfTriangles(ll arr[], int n)
{
   
    int count = 0;
 
   
    for (int i = 0; i < n-2; ++i)
    {
      
        int k = i+2;
 
      
        for (int j = i+1; j < n; ++j)
        {
           
            while (k < n && arr[i] + arr[j] > arr[k]){
               ++k;
            }
 
            count += k - j - 1;
            if(count>0){
            	return true;
            }
        }
    }
 
    return false;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	ll v[n];
	for(int i=0; i< n; i++){
		cin>>v[i];
	}	
	sort(v,v+n);
	bool X = findNumberOfTriangles(v,n);
	if(X){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}