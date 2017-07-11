#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int No_Of_Digit(){
    v.push_back(1);
    v.push_back(1);
    v.push_back(7);
    int a[5005]={0},b[5005]={0},c[5005]={0};
	b[0]=1;
    int y=3;
	int d,temp=0,m=1,n;
	//cout<<"Enter Number of term : "
	//cout<<"Fibonacci Series : 0  1  ";
	for(int i=2;y<=5000;i++){
		for(int j=0;j<m;j++)
		{	d=a[j]+b[j]+temp;
			c[j]=d%10;
			temp=d/10;
			if(temp>0 && j==m-1)
				m++;
		}
	//	for(int i=m-1;i>=0;i--)
		//	cout<<c[i];

		for(int x=0;x<m;x++)
			a[x]=b[x];
		for(int x=0;x<m;x++)
			b[x]=c[x];
		//cout<<"  \n";
		if(m==y){
            v.push_back(i);
            y++;
        }
    }
    return 0;
}
int main()
{	No_Of_Digit();
	int tc;
 cin>>tc;
 while(tc--){
    int n;
	cin>>n;
	cout<<v[n]<<endl;
}
}
