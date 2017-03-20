// author = "akgarhwal"

#include <bits/stdc++.h>
using namespace std;

char p[2000000],t[5000000];
int len=0;
// void PRE(){
// 	int d=0;
// 	v[0]=0;
// 	for(int i=1; i< len; i++){
// 		while(d>0 and p[i]!=p[d]){
// 			d = p[d];
// 		}
// 		if(p[i]==p[d]){
// 			v[i] = d+1;
// 		}
// 		else{
// 			v[i]=0;
// 		}
// 		d = v[i];
// 	}

// }
vector<int> PrefixFunction(string S) {
    vector<int> v(S.size());
    // int j = 0;
    // for (int i = 1; i < (int)S.size(); i++) {
    //     while (j > 0 && S[j] != S[i])
    //         j = p[j-1];

    //     if (S[j] == S[i])
    //         j++;
    //     p[i] = j;
    // }   
    int d=0;
	v[0]=0;
	for(int i=1; i< len; i++){
		while(d>0 and S[i]!=S[d]){
			d = v[d-1];
		}
		if(S[i]==S[d]){
			v[i] = d+1;
		}
		else{
			v[i]=0;
		}
		d = v[i];
	}
    return v;
}


int main(){
	
	int n;
	while(scanf("%d",&n)!=EOF){
		scanf("%s",p);
		scanf("%s",t);
		int f=0;
		len=n;
		vector<int> v = PrefixFunction(p);
		//kmp algo
		int d=0;
		int i=0;
		int sz = strlen(t);
		while(i < sz){
			while(d>0 and t[i]!=p[d]){
				d = v[d-1];
			}
			if(t[i]==p[d]){
				d++;
			}
			if(d==n){
				f=1;
				printf("%d\n",i-n+1);
				d =  v[d-1];
			}
			i++;
		}
		cout<<endl;
		
	}
	return 0;
}