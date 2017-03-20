
// author = "akgarhwal"

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;	

int size[100001];
ll E[100001];


void init(int arr[],int n){
	for(int i=0; i< n; i++){
		arr[i] = i;
		size[i] = 1;
	}
}

bool find(int arr[],int A,int B){
    if(arr[A] ==arr[B]){
    	return true;
    }
    return false;
}

int root(int arr[],int i){
	while(arr[i]!=i){
		arr[i] = arr[arr[i]];
		i = arr[i];
	}
	return i;
}

void union1(int arr[],int A,int B){
	int rootA = root(arr,A);
	int rootB = root(arr,B);
	if(rootA==rootB){
	    return ;
	}
	if(size[rootA] < size[rootB]){
		arr[rootA] = arr[rootB];

		size[rootB] += size[rootA];
		size[rootA]  = -1;
	}
	else{
		arr[rootB] = arr[rootA];
		size[rootA] += size[rootB];
		size[rootB]  = -1;
	}
}	


int main(){
	int n,m;
	cin>>n;

	for(int i=0;i<n;i++){
	    cin>>E[i];
	}
	cin>>m;
	n++;
	int arr[n];
	init(arr,n);
    for(int i=0; i< m; i++){
    	int x,y;
    	cin>>x>>y;
    	union1(arr,x-1,y-1);
    	//cout<<endl;
    }
    int ROOT[n];
    for(int i=0; i< n; i++){
    	ROOT[i] = root(arr,i);
    }
    map<int, multiset<int> > mp;
    for(int i=0; i< n; i++){
    	mp[ROOT[i]].insert(E[i]);
    }

    ll ans=1ll;
    for(map<int, multiset<int> >::iterator it = mp.begin();it!=mp.end();it++){
    	multiset<int> mst = it->second;
    	int low  = *(mst.begin());
    	int cnt=0;
    	//cout<<"One \n\n";
    	for(multiset<int>::iterator itm = mst.begin();itm!=mst.end();itm++){
    		//cout<<"Value =  "<<*itm<<endl;
    		if(low!=*itm){
    			break;
    		}
    		cnt++;
    	}
    	ans = ans * (ll)cnt;
    }
    cout<<ans;
    

	return 0;
}