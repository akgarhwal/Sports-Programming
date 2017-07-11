#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
int check=0;
char *glo;
void findNext(char number[], int n)
{
	int i, j;
	for (i = n-1; i > 0; i--)
		if (number[i] > number[i-1])
		break;
	if (i==0)
	{
        check=-1;
		return ;
	}

	int x = number[i-1], smallest = i;
	for (j = i+1; j < n; j++)
		if (number[j] > x && number[j] < number[smallest])
			smallest = j;
	swap(&number[smallest], &number[i-1]);
	sort(number + i, number + n);
glo=number;
	return ;
}

int main(){
    int n;
    cin>>n;
    set<llt> test;
    char x[11]={48,49,50,51};
    int z=n-3,y=4;
    while(z){
        x[y]=char(y+48);
        z--;
        y++;
    }
    unsigned long long int sum=0;
    glo=x;
    while(check!=-1){

        //cout<<"     ";
       // puts(glo);

        int ind=1,f=0;
        int num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
        findNext(x,n+1);
        if(n>=3 and (int((int)(glo[3]-48))%2==0)){
            //sum+=atol(glo);
            //cout<<"\n Num = "<<atol(glo)<<endl;
        }
        else{
            continue;
        }
        //num=((int)(glo[2]-48)) + ((int)(glo[3]-48)) + ((int)(glo[4]-48)) ;
        if(n>=4){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%3==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
        
        if(n>=5){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%5==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
        
        if(n>=6){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%7==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
        
        if(n>=7){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%11==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
       
        if(n>=8){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%13==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
        
        if(n>=9){
            ind++;
            num=((int)(glo[ind]-48))*100 + ((int)(glo[ind+1]-48))*10 + ((int)(glo[ind+2]-48));
            if(num%17==0){

            }
            else{
                continue;
            }
            //sum+=atol(glo);
        }
        
        sum+=atol(glo);
        test.insert(atol(glo));
        //cout<<"Number "<<glo<<endl;

    }
    if(test.count(atol(glo))>0)
        cout<<sum-atol(glo);
    else
        cout<<sum<<endl;
  return 0;
}