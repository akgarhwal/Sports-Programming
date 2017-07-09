#include<iostream>
using namespace std;
int main()
{	int tc;
	cin>>tc;
	while(tc--){
	int n,temp=0,i,j,m=1,b,countzero=0;
	short int a[500000]={1};
	cin>>n;
	for(i=1;i<=n;i++)
	{	for(j=0;j<m;j++)
		{	b=i*a[j]+temp;
			a[j]=b%10;
			temp=b/10;
		}
		while(temp>0)
		{	a[m]=temp%10;
			temp=temp/10;
			m++;
		}
	}
	long sum=0;
	//cout<<"Factorial of "<<n<<" is :  ";
	for(i=m-1;i>=0;i--)
		sum+=a[i];
	cout<<sum<<endl;
	}	
	return 0;
}