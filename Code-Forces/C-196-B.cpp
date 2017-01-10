/*
	Author      : akgarhwal
	Date        : 07-01-2017 12:59:33
	Description : Movie
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	a=a*c;
	b=b*c;
	d=d*(a/c);
	c=c*(a/c);
	
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	int p = min(b,d);
	int q = max(b,d);
	p = abs(p-q);
	int g= __gcd(p,q);
	cout<<p/g<<"/"<<q/g<<endl;
	return 0;
}