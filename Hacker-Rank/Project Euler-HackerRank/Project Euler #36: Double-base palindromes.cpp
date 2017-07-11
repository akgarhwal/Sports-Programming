#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPalin(ll num){
ll digit,rev=0;
ll x=num;
do
{
digit = num%10;
rev = (rev*10) + digit;
num = num/10;
}while (num!=0);
if(x==rev)
return true;
else
return false;
}
bool isPalin(string s){
string k=s;
reverse(s.begin(),s.end());
if(k==s)
return true;
else
return false;
}
string kbase(int n,int k){
string ans;
while(n){
ans+=n%k+48;
n/=k;
}
return ans;
}
int main() {
ll n,k,i,s=0;
cin>>n;
cin>>k;
for(i=0;i<n;i++){
if(isPalin(i)){
if(isPalin(kbase(i,k))){
s+=i;
}
}
}
cout<<s<<endl;

}