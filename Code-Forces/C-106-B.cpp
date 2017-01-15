/*
	Author      : akgarhwal
	Date        : 13-01-2017 22:20:56
	Description : Clock
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pow1(ll x,ll y){
	if(y==0){
		return 1;
	}
	else if((y&1)==1){
		ll res = pow1(x,y/2);
		return x*res*res;
	}
	else{
		ll res = pow1(x,y/2);
		return res*res;
	}
}


int fun(char ch){
	if(ch>='0' and ch<='9'){
		return int(ch-'0');
	}
	return int(ch-55);
}

int CalcHour(int h[],int j,int x){
	int res  = 0;
	for(int i=0; i< x; i++){
		res += h[i]*(int)(pow1(j,i));
	}
	return res;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string time;
	cin>>time;
	int h[5],m[5];
	int ind =0;
	for(int i=0; i< time.size(); i++){
		if(time[i]==':'){
			ind=i;
			break;
		}
	}
	int x=0,mx=0;
	for(int i=ind-1; i>=0 ; i--){
		h[x++] = fun(time[i]);
		mx =max(mx,h[x-1]);
	}
	int y=0;
	for(int i=time.size()-1; i>ind ; i--){
		m[y++] = fun(time[i]);
		mx =max(mx,m[y-1]); 
	}
	vector<int> v;
	for(int i=mx+1; i<=65; i++){
		int H = CalcHour(h,i,x);
		int M = CalcHour(m,i,y);
		//cout<<"I = "<<i<<"  H = "<<H<<" M= "<<M<<endl;
		if(H>=0 and H<=23 and M>=0 and M<=59){
			v.push_back(i);
		}
	}
	if(v.size()==0){
		cout<<0<<endl;
	}
	else if(v.size()==65-mx){
		cout<<-1<<endl;
	}
	else{
		for(int i=0; i< v.size(); i++){
			cout<<v[i]<<" ";
		}
	}
	return 0;
}