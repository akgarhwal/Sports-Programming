#include<bits/stdc++.h>
using namespace std;
// inline void st(int &x)
// {
//     register int c = gc();
//     x = 0;
//     int neg = 0;
//     for(;((c<48 || c>57) && c != '-');c = gc());
//     if(c=='-') {neg=1;c=gc();}
//     for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
//     if(neg) x=-x;
// }
const int limit = 50001;
vector<int> prime;
bool mark[limit+1];
bool mark1[1000009];
void simpleSieve()
{
    // Create a boolean array "mark[0..n-1]" and initialize
    // all entries of it as true. A value in mark[p] will
    // finally be false if 'p' is Not a prime, else true.

    memset(mark, true, sizeof(mark));

    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }

    // Print all prime numbers and store them in prime
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
        }
    }
}

// Prints all prime numbers smaller than 'n'
void segmentedSieve(int low,int high)
{
    int a=low;
    int b=high;
    //cout<<"Ok enter";

       // cout<<"created";
        memset(mark1, true, sizeof(mark1));
      //  cout<"finally";
        for (int i = 0; prime[i]*prime[i]<=b; i++)
        {

            int loLim = floor(low/prime[i]) * prime[i];

            for (int j=loLim;j<=high; j+=prime[i]){
                if(j < a)
                    continue;
                mark1[j-low] = false;
            }
        }
        int last=0,i=0;
        for(int p=prime[i];p*p<=b;p = prime[++i]){
                if(p>=a and p<=b){
                    printf("%d\n",p);
                    last=p;
                }
        }
        for(int i=0;i<b-a+1;i++){
            if(mark1[i] ){
                printf("%d\n",i+a);
            }
        }
        // Numbers which are not marked as false are prime

        // Update low and high for next segment
}
int main(){
    simpleSieve();
    // for(int i=0;i<=100;i++){
        // cout<<" Hello  ";
    // }
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int a,b;
         scanf("%d %d",&a,&b);
        //cin>>a>>b;
       // cout<<"Ok enter";
       if(b<=46000){
           for(int i=a;i<=b;i++){
               if(mark[i]){
                   printf("%d\n",i);
               }
           }
           continue;
       }
        segmentedSieve(a,b);
    }

}
