#include<bits/stdc++.h>
using namespace std;
#define s(x) scanf("%lld",&x)
typedef long long ll;
vector<int> prime;
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
int Number_of_Factor(int temp){
		int k=0;
		int total=1;
        int count=0;
		for(int j=prime[k];j*j<=temp;j=prime[++k]){
			count=0;
			while(temp%j==0){
				count++;
				temp/=j;
			}
            total*=(count+1);
        }
		if(temp!=1){
			total =total<<1;
        }
		return total;
}
int main(){
    vector<bool> p(32000, true);
        for (int i = 2; i <= 32000; i++)
        	if (p[i])
        		for (int j = i * 2; j <= 32000; j += i)
        			p[j] = false;

        for (int i = 2; i <= 32000; i++)
        	if (p[i])
        		prime.push_back(i);
    int a,b,m;
    cin>>a>>b>>m;
    int res=0;
    for(int i=a;i<=b;i++){
        int r =Number_of_Factor(i);
        if(r==m)
            res++;
    }
    cout<<res<<endl;
}
