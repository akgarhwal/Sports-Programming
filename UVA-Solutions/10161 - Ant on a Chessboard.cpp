/*akgarhwal*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
    cin>>n;
    while(n!=0){
        int up = ceil(sqrt(n));
        int lw = up-1;
        int diff = (up*up - lw*lw);
        int mid = diff/2 +1;
        //cout<<"Up= "<<up<<" lw= "<<lw<<" m= "<<mid<<endl;
        if(up&1){
            if(n-(lw*lw) <= mid){
                cout<<mid<<" "<<n-(lw*lw)<<endl;
            }
            else{
                cout<<(up*up)-n+1<<" "<<mid<<endl;
            }
        }
        else{
            if(n-(lw*lw) <= mid){
                cout<<n-(lw*lw)<<" "<<mid<<endl;
            }
            else{
                cout<<mid<<" "<<(up*up)-n+1<<endl;
            }
        }
        cin>>n;
    }
    return 0;
}
