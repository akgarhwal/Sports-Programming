#include <bits/stdc++.h>
using namespace std;


struct Node{
    int key;
    int left;
    int right;
    Node(){
        key = 0;
        left = -1;
        right = -1;
    }
};

vector<Node> adj(100001);

bool isBST(int root,long mi,long mx){

    if(root == -1){
        return true;
    }

    if(!(mi < adj[root].key and adj[root].key < mx)){
        return false;
    }
    if(adj[root].left == -1 and adj[root].right == -1 ){
        return true;
    }

    return isBST(adj[root].left,mi,adj[root].key) && isBST(adj[root].right,adj[root].key,mx);

}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
   
    for(int i=0; i< n; i++){
        int k,l,r;
        cin>>k>>l>>r;
        adj[i].key = k;
        adj[i].left = l;
        adj[i].right = r;       
    }
    //cout<<adj[5].key<<" "<<adj[5].left<<" "<<adj[5].right<<endl;

    if(isBST(0,INT_MIN-5ll,INT_MAX+5ll)){
        cout<<"CORRECT";
    }
    else{
        cout<<"INCORRECT";
    }

    return 0;
}