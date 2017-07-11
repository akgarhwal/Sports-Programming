#include<bits/stdc++.h>
using namespace std;
vector<long long int> prime;
vector<long long int> pnum;
bool isPrime(long n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	if (!(n%2) || !(n%3)) return false;
	int x = (int)(sqrt(n)+1e-7);
	for(int i=5;i<=x;i+=6){
		if(!(n%i) or !(n%(i+2)))	return false;
	}
	return true;
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
long findNext(char number[], int n)
{
    int i, j;

    
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;

    
    if (i==0)
    {
        
        return -1;
    }

    
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;

    
    swap(&number[smallest], &number[i-1]);

   
    sort(number + i, number + n);

    //cout << "Next number with same set of digits is " << number;
    //std::string::size_type sz;   // alias of size_t

      return  atol (number);
}
void checkPanNum(){
    int k=0;
    long long int co=0;
    for(long long i=123;i<=100000000000-1;){
        int a[10] = {0,0,0,0,0,0,0,0,0,0};
        int c=0;
        long long int n=i;
        while(n){
            c++;
            a[n%10]++;
            n=n/10;
        }
        int f=0;
        for(int x=1;x<=c;x++){
            if(a[x]!=1){
                f=1;
                break;
            }
        }
        if(f==0 and a[0]==0){
            co++;
            if(isPrime(i))
                pnum.push_back(i);
            //cout<<i<<endl;
        }
            char digit[]={};
        long long int z=i;
        int q=0;
        while(z){
            digit[q++]=(z%10+48);
            z/=10;
        }
    //    cout<<digit<<endl;
        reverse(digit, digit + strlen(digit));
    //    cout<<digit<<endl;
        i=findNext(digit,q);
        if(i==-1){
            i=1;
            int m=1;
            while(q--){
                i=i*10+(++m);
            }
        }
    }
}
int main(){

     checkPanNum();
   // genPrime();
  int tc;
  cin>>tc;
  while(tc--){
     long long int n;
      cin>>n;
      int x = upper_bound(pnum.begin(),pnum.end(),n)-pnum.begin();
      //cout<<x<<endl;
      if(x>0){
          cout<<pnum[x-1]<<endl;
      }
      else{
          cout<<-1<<endl;
      }

  }
  return 0;
}
