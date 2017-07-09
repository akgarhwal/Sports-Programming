#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
void pone2ten(ll a){
    switch(a){
        case 0:
            cout<<"Zero ";
            break;
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
    }
}
void pzero2hundred(ll n){
    if(n<20){
        switch(n){
            case 1:
                cout<<"One ";
                break;
            case 2:
                cout<<"Two ";
                break;
            case 3:
                cout<<"Three ";
                break;
            case 4:
                cout<<"Four ";
                break;
            case 5:
                cout<<"Five ";
                break;
            case 6:
                cout<<"Six ";
                break;
            case 7:
                cout<<"Seven ";
                break;
            case 8:
                cout<<"Eight ";
                break;
            case 9:
                cout<<"Nine ";
                break;
            case 10:
                cout<<"Ten ";
                break;
            case 11:
                cout<<"Eleven ";
                break;
            case 12:
                cout<<"Twelve ";
                break;
            case 13:
                cout<<"Thirteen ";
                break;
            case 14:
                cout<<"Fourteen ";
                break;
            case 15:
                cout<<"Fifteen ";
                break;
            case 16:
                cout<<"Sixteen ";
                break;
            case 17:
                cout<<"Seventeen ";
                break;
            case 18:
                cout<<"Eighteen ";
                break;
            case 19:
                cout<<"Nineteen ";
                break;
        }
    }
    else{
        int v= n/10;
        switch(v){
            case 2:
                cout<<"Twenty ";
                break;
            case 3:
                cout<<"Thirty ";
                break;
            case 4:
                cout<<"Forty ";
                break;
            case 5:
                cout<<"Fifty ";
                break;
            case 6:
                cout<<"Sixty ";
                break;
            case 7:
                cout<<"Seventy ";
                break;
            case 8:
                cout<<"Eighty ";
                break;
            case 9:
                cout<<"Ninety ";
                break;
        }
        n=n%10;
        if(n>0)
            pone2ten(n);
    }
}
void fun(ll x) {
    int u = x/100;
    if(u>=1){
    pone2ten(u);
    cout<<"Hundred ";
    }
    x=x%100;
    if(x>0){
        pzero2hundred(x);
    }

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        if(n==0){
            cout<<"Zero\n";
            continue;
        }
        ll bil = n/1000000000;
        n=n%1000000000;
        ll mil = n/1000000;
        n=n%1000000;
        ll tho = n/1000;
        n=n%1000;
        ll hun = n;
        if(bil>0){
            fun(bil);
            cout<<"Billion ";
        }
        if(mil>0){
               fun(mil);
        cout<<"Million ";
        }
        if(tho>0){
            fun(tho);
            cout<<"Thousand ";
        }
        if(hun>0){
            fun(hun);
        }
        
        cout<<endl;
    }
    return 0;
}