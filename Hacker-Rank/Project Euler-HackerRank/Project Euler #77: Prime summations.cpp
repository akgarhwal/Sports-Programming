#include<bits/stdc++.h>
using namespace std;
#define MOD 1e9+7
long long int a[168][1000+1]={0};
vector<int> c;
bool isPrime(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	if (!(n%2) || !(n%3)) return false;
	int x = (int)(sqrt(n)+1e-7);
	for(int i=5;i<=x;i+=6){
		if(!(n%i) or !(n%(i+2)))	return false;
	}
	return true;
}
void primeCal(int n){
    c.push_back(2);
    for(int i=3;i<=(n);i+=2){
        if(isPrime(i)){
            c.push_back(i);
        }
    }
    
}
int compute(int n){
     //int c[]={2,3,5,7,11,13,17,19};
    int c1=c.size();
		int x=0,i=0;
    
		for(int i=0;i<c1;i++){
			a[i][0]=1;
		}
		for(int i=0;i<=n;i++){
			if(i%c[0]==0)    
                a[0][i]=1;
            else
                a[0][i]=0;
                  
		}
		for(int i=1;i<c1;i++){
			for(int j=1;j<=n;j++){
				if(j<c[i]){
					a[i][j] = a[i-1][j];
				}
				else{
					a[i][j] = a[i-1][j]+a[i][j-c[i]];
				}
				//if(a[i][j]>1e9+7){
				//	a[i][j]-=1000000007;
				//}
			}
		}
    return a[c1-1][n];
}
int main(){
   // int a[100001]={0};
   // for(int i=1;i<=100000;i++){
   //     a[i]=compute(i);
   // }
    primeCal(1000);
    compute(1000);
    int tc;
    cin>>tc;
   
    while(tc--){
		int n;
    cin>>n;
		
		cout<<a[168-1][n]<<endl;
    }
}