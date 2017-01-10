/*
	Author      : akgarhwal
	Date        : 05-01-2017 21:25:56
	Description : Before an Exam
*/

#include <iostream>
using namespace std;

int main(){
	int d,sumT;
	cin>>d>>sumT;
	int miT[d],mxT[d];
	int mt=0,MT=0;
	int D[d];
	for(int i=0; i< d; i++){
		cin>>miT[i]>>mxT[i];
		mt += miT[i];
		MT += mxT[i];
		D[i]=0;
	}
	if(mt <= sumT and sumT <= MT){
		cout<<"YES\n";
		int dif = sumT-mt;
		for(int i=0; i< d; i++){
			int x = mxT[i]-miT[i];
			if(x<=dif){
				//cout<<x<<"  $$ "<<dif<<endl;
				D[i] = mxT[i];
				dif -= x;
			}
			else if(dif<x){
				D[i] = miT[i]+dif;
				dif=0;
			}
			else{
				D[i] = miT[i];
			}
			cout<<D[i]<<" ";
			
		}

	}
	else{
		cout<<"NO";
	}
	return 0;
}