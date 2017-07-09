#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
    int k = 1000000007;
	 while(T--)
	  {
	  	 int n,m;
	  	 cin>>m>>n;
	  	 int arr[m+1][n+1];
	  	for(int i=0;i<m+1;i++)
	  	   arr[i][0]=1;
	  	for(int i=0;i<n+1;i++)
	  	    arr[0][i]=1;
	    for(int i=1;i<m+1;i++) 
	    {
	     for(int j=1;j<n+1;j++)
	     {
	         arr[i][j]=(arr[i-1][j])+(arr[i][j-1]);
	             if(arr[i][j]>=k)
	                arr[i][j]-=k;     
	     }
	    }
	    cout<<arr[m][n]<<"\n"; 
      }
	 return(0);
}