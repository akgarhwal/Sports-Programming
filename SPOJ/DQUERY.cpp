/*
	Author      : akgarhwal
	Date        : 04-07-2017 10:40:33
	Description : Language Used -> C++14
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long	ll;
typedef vector<int>	vi;
typedef pair<int,int>	pi;
#define F		first
#define S		second
#define PB		push_back
#define MP		make_pair
#define sz(a)		int((a).size())
#define all(c)		(c).begin(),(c).end()
#define REP(i,a,b)	for(int i = a; i < b; i++)
#define tr(c,i)		for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x)	((c).find(x) != (c).end())
#define cpresent(c,x)	(find(all(c),x) != (c).end())
#define MOD		1000000007 	/* 10^9+7*/

int a[30005];
int f[1000005];
int answer=0;
int BLOCK =0;

struct query
{
	int L,R,ind;
};

bool my_sort(query x,query y){
	if(x.L/BLOCK != y.L/BLOCK) {
		// different blocks, so sort by block.
		return x.L/BLOCK < y.L/BLOCK;
	}
	// same block, so sort by R value
	return x.R < y.R;
}

void add(int i){
	f[a[i]]++;
	if(f[a[i]] == 1){
		answer++;
	}
}
void remove(int i){
	f[a[i]]--;
	if(f[a[i]]==0){
		answer--;
	}
}


int main(){

	int n;
	scanf("%d",&n);
	BLOCK = (int)sqrt(n);

	for(int i=0; i< n; i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);

	query q[m];
	for(int i=0; i< m; i++){
		scanf("%d%d", &q[i].L, &q[i].R);
		q[i].L--; q[i].R--;
		q[i].ind = i;
	}

	sort(q,q+m,my_sort);
	int ans[m]={0};
	int currentL=0,currentR=0;
	for(int i=0; i< m; i++){
		int L = q[i].L;
		int R = q[i].R;

		//first do add function
		while(currentL > L){
			add(currentL-1);
			currentL--;
		}

		while(currentR <= R){
			add(currentR);
			currentR++;
		}
		// now do remove function
		while(currentL < L){
			remove(currentL);
			currentL++;
		}
		while(currentR > R+1){
			remove(currentR-1);
			currentR--;
		}

		ans[q[i].ind] = answer;
	}
	for(int i=0; i< m; i++){
		printf("%d\n",ans[i]);
	}

	return 0;
}