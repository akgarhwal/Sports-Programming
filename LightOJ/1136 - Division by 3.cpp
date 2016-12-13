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
     
    #define endl "\n"
    #define S(t) scanf("%d",&t)
    #define S2(x,y) scanf("%d %d",&x,&y)
    #define SL(t) scanf("%lld",&t)
    #define P(t) printf("%d ",t)
    #define PL(t) printf("%lld ",t)
    #define NL printf("\n");
    #define ALL(x) x.begin(),x.end()
    #define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
    #define rer(i,l,n) for(int (i)=(int)(l);(i)<=(int)(n);++(i))
     
    typedef long long ll;
    typedef pair<int,int> ii;
    typedef vector<int> vi;
    typedef vector<long long> vl;
     
    int main(){
        int tc,cs=0;
        S(tc);
        while(tc--){
            ll A,B;
            int res=0;
            SL(A);SL(B);
           
            if(A==B){
                int sum=0;
                if(A%3==0 or A%3==2){
                    sum=1;
                }
                printf("Case %d: %d\n",++cs,sum);
                continue;
            }
            ll sum = (B/3) * 2;
           
            ll sum1 = (A/3)*2;
            if(B%3==0){
                sum--;
            }
            if(A%3==0){
                sum1--;
            }
            sum =sum-sum1;
             if(B%3==2 or B%3==0){
                sum++;
            }
            //cout<<sum<<"   "<<sum1<<endl;
            printf("Case %d: %d\n",++cs,sum);
        }
        return 0;
    }