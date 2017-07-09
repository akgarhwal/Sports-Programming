#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
bool isPrime(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	int x = (int)(sqrt(n)+1e-7);
	for(int i=5;i<=x;i+=6){
		if(!(n%i) or !(n%(i+2)))	return false;
	}
	return true;
}
int Number_of_Factor(int temp){
		int k=0;
		int total=1;
		for(int j=prime[k];j*j<=temp;j=prime[++k]){
			int count=0;
			while(temp%j==0){
				count++;
				temp/=j;
			}
			total*=(count+1);
		}
		if(temp!=1)
			total*=2;
		return total;
	}
int main(){
  prime.push_back(2);
	prime.push_back(3);
	for(int i=5;i<=32000;i+=6){
		if(isPrime(i)){
			prime.push_back(i);
		}
		if(isPrime(i+2)){
			prime.push_back(i+2);
		}
	}
  int tc;
  cin>>tc;
  while(tc--){
    int n;
    cin>>n;
    int t=1;
    int num=t;
    while(n>=Number_of_Factor(num)){
      num+=++t;
    }
    cout<<num<<endl;
  }
  return 0;
}