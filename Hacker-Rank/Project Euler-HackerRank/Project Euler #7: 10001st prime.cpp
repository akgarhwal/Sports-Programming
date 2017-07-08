#include<iostream>
#include<algorithm>
using namespace std;
bool isPrime(int n)
{
	if (n == 2) 
		return true;
   	if (n == 3) 
	   	return true;
   	if (n % 2 == 0 )
	   	return false;
   	if (n % 3 == 0 )
	   	return false;
	   	
   int i = 5;
   int w = 2;
   while (i * i <= n)
   {
      if( n % i == 0)
         return false;

      i += w;
      w = 6 - w;
	}
	return true;
}
int main(){
	int tc;
	cin>>tc;
	//while(tc--){
		int n,max=0;
		//cin>>n;
		int *p = new int[tc];
		for(int i=0;i<tc;i++){
			cin>>p[i];
			max = max<p[i]?p[i]:max;
		}
		int *a = new int[max];
		int count=0;
		for(int i=2;count<max;i++){
			if(isPrime(i)==true){
				a[count]=i;
				count++;
			}
			//cout<<count<<endl;
		}
		for(int i=0;i<tc;i++){
			cout<<a[p[i]-1]<<endl;
		}
	return 0;
}