// When I wrote this, only God and I understood what I was doing
// Now, God only knows
/* akgarhwal */
#include<bits/stdc++.h>
using namespace std;
// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
//define
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
//merge Function
unsigned long long counti=0;
void merge(int a[], int low, int middle, int high){
    int i;  /* counter */
    queue<int> buffer1, buffer2; /* buffers to hold elements for merging */
    for (i=low; i<=middle; i++) buffer1.push(a[i]);
    for (i=middle+1; i<=high; i++) buffer2.push(a[i]);
    i = low;
    while (!(buffer1.empty() || buffer2.empty())) {
        int h1 = buffer1.front(),h2= buffer2.front();
        if ((h1) <= (h2)){
            a[i++] = h1;
            buffer1.pop();

        }
        else{
            a[i++] = h2;
            buffer2.pop();
            counti += buffer1.size();
        }
    }
    while (!buffer1.empty()){ a[i++] = buffer1.front();buffer1.pop();}
    while (!buffer2.empty()){ a[i++] = buffer2.front();buffer2.pop();}
}
//mergeSort
void mergesort(int a[], int low, int high){
    int middle;     /* index of middle element */
    if (low < high) {
        middle = (low+high)/2;
        mergesort(a,low,middle);
        mergesort(a,middle+1,high);
        merge(a, low, middle, high);
    }
}
//main
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        counti=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        mergesort(a,0,n-1);
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;
        cout<<counti<<endl;
    }
    return 0;
}
