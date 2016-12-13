    /*       _                    _                  _
        __ _| | ____ _  __ _ _ __| |____      ____ _| |
       / _` | |/ / _` |/ _` | '__| '_ \ \ /\ / / _` | |
      | (_| |   < (_| | (_| | |  | | | \ V  V / (_| | |
       \__,_|_|\_\__, |\__,_|_|  |_| |_|\_/\_/ \__,_|_|
                 |___/                                     
     
    When I wrote this, only God and I understood what I was doing
    Now, God only knows                                             */
     
    #include<bits/stdc++.h>
    using namespace std;
     
    #define si(t) scanf("%d",&t)
    #define sl(t) scanf("%lld",&t)
    #define pi(t) printf("%d ",t)
    #define pl(t) printf("%lld ",t)
     
    typedef long long ll;
     
    //bfs
     
     
    void bfs(int u){
       
    }
     
    int main(){
        int tc;
        si(tc);
        int cs=0;
        while(tc--){
            int n;
            si(n);
            vector<pair<int ,int> > Adj[n];
            vector<int> dist(n,-1);
            // for(int i=0;i<n;i++){
            //  Adj[i].clear();
            // }
            for(int i=0;i<n-1;i++){
                int x,y,w;
                si(x);si(y);si(w);
                Adj[x].push_back({y,w});
                Adj[y].push_back({x,w});
            }
            int u=0;
            queue<int> q;
            q.push(u);
            dist[u]=0;
            while(!q.empty()){
                int x=q.front();q.pop();
                for(int i=0;i<Adj[x].size();i++){
                    pair<int ,int> ii = Adj[x][i];
                    if(dist[ii.first] ==-1){
                        dist[ii.first] = dist[x] + ii.second;
                        q.push(ii.first);
                    }
                }
            }
            int max=dist[0],node=0;
            for(int i=1;i<n;i++){
                if(dist[i]>max){
                    max=dist[i];
                    node=i;
                }
            }
     
            dist.clear();
            dist.assign(n,-1);
            u=node;
            //queue<int> q;
            q.push(u);
            dist[u]=0;
            while(!q.empty()){
                int x=q.front();q.pop();
                for(int i=0;i<Adj[x].size();i++){
                    pair<int ,int> ii = Adj[x][i];
                    if(dist[ii.first] ==-1){
                        dist[ii.first] = dist[x] + ii.second;
                        q.push(ii.first);
                    }
                }
            }
            int max2=dist[0],node2=0;
            for(int i=1;i<n;i++){
                if(dist[i]>max2){
                    max2=dist[i];
                    node2=i;
                }
            }
            vector<int> dist2(n,-1);
            u=node2;
            //queue<int> q;
            q.push(u);
            dist2[u]=0;
            while(!q.empty()){
                int x=q.front();q.pop();
                for(int i=0;i<Adj[x].size();i++){
                    pair<int ,int> ii = Adj[x][i];
                    if(dist2[ii.first] ==-1){
                        dist2[ii.first] = dist2[x] + ii.second;
                        q.push(ii.first);
                    }
                }
            }
            printf("Case %d:\n",++cs);
            for(int i=0;i<n;i++){
                if(dist[i]>dist2[i]){
                    printf("%d\n",dist[i]);
                }
                else{
                   printf("%d\n",dist2[i]);
                }
            }
        }
        return 0;
    }
