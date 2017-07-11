#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int a[10001]={0};
int Number_of_Factor(int temp){
		int k=0;
		int total=1;
        int count=0;
		for(int j=prime[k];j*j<=temp;j=prime[++k]){
			count=0;
			while(temp%j==0){
				a[j]++;
				temp/=j;
			}
            //total*=(count+1);
        }
		if(temp!=1){
			//total =total<<1;
            a[temp]++;
        }
		return 1;
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

        int n;
        cin>>n;
        for(int i=2;i<=n;i++){
            Number_of_Factor(i);
        }
        cout<<2<<"^"<<a[2];
        for(int i=3;i<=n;i++){
            if(a[i]!=0){
                printf(" * %d^%d",i,a[i]);
            }
        }
}
