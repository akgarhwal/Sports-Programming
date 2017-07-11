#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
set<ll> s;
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
		int total=0;
        int count=0;
		for(int j=prime[k];j*j<=temp;j=prime[++k]){
			count=0;
			while(temp%j==0){
				count++;
				temp/=j;
			}
            if(count!=0){
                total++;
		     }
        }
		if(temp!=1){
			total++;
        }
		return total;
}
int main(){
        vector<bool> p(1000001, true);
        for (int i = 2; i <= 1000000; i++)
        	if (p[i])
        		for (int j = i * 2; j <= 1000000; j += i)
        			p[j] = false;

        for (int i = 2; i <= 1000000; i++)
        	if (p[i])
        		prime.push_back(i);
    int n,k;
    cin>>n>>k;
    int x=k,y=0;
    set<ll> t;
    int a[2000005]={0};
    for(int i=14;i<=2000004;i++){
        if(isPrime(i)){
            a[i]=1;
        }
        else{
            a[i]=Number_of_Factor(i);
        }
    }
    
    int f=0; 
    for(int i=14;i<=n;i++){
            f=0;
            int x=0;
            while(x<k){
                if(a[i+x]==k){
                    
                }
                else{
                    f=1;
                    break;
                }
                x++;
            }
        if(f==0){
            cout<<i<<endl;
        }
    }
    return 0;
}