// author = "akgarhwal"
// Max Heap using Array 

#include <iostream>
using namespace std;

int heap[1000001];
int n=0;

void max_Heapify(int i){
	int left = 2*i,right = 2*i+1;
	int largest = i;
	if(left <= n and heap[left] > heap[i]){
		largest = left;
	}
	if(right <= n and heap[right] > heap[largest]){
		largest = right;
	}
	if(largest != i){
		swap(heap[i],heap[largest]);
		max_Heapify(largest);
	}
}

void insert(int x){
	heap[n+1]=x;
	int i=n+1;
	while(i>1){
		if(heap[i/2] < heap[i]){
			swap(heap[i],heap[i/2]);
			i = i/2;
		}
		else{
			break;
		}
	}
	n++;
}

void remove(){
	if(n < 1){
		cout << "Error! Heap is Empty.\n";
		return ;
	}
	swap(heap[1],heap[n]);
	n--;
	max_Heapify(1);
	//MAX Heapify
	// while(1){
	// 	if(2*i > n){
	// 		break;
	// 	}
	// 	else if(2*i+1 > n){
	// 		if(heap[i] < heap[2*i]){
	// 			swap(heap[i],heap[2*i]);
	// 			i = i*2;
	// 			break;
	// 		}
	// 	}
	// 	else{
	// 		int ch1 = heap[2*i],ch2 = heap[2*i+1];
	// 		if(ch1 > ch2 and heap[i] < ch1){
	// 			swap(heap[2*i],heap[i]);
	// 			i = i*2;
	// 		}
	// 		else if(ch2 > ch1 and heap[i] < ch2){
	// 			swap(heap[2*i+1],heap[i]);
	// 			i = i*2 + 1;
	// 		}
	// 		else{
	// 			break;
	// 		}
	// 	}
	// }


}

void heap_Sort(){
	for(int i=n; i >= 1 ; i--){
		swap(heap[1],heap[i]);
		n--;
		max_Heapify(1);
	}
}

void build_Heap(){
	for(int i=n/2; i>=1 ; i--){
		max_Heapify(i);
	}
}

void print(){
	for(int i=1; i<= n; i++){
		cout << heap[i] << " ";
	}
}

int main(){
	cin>>n;
	int x = n;
	for(int i=1; i<= n; i++){
		cin>>heap[i];
	}
	build_Heap();
	print();
	remove();
	cout<<endl;
	print();
	remove();
	cout<<endl;
	print();
	remove();
	cout<<endl;
	print();
	remove();
	cout<<endl;
	print();
	remove();
	cout<<endl;
	print();
	remove();
	cout<<endl;
	print();

	// heap_Sort();
	// for(int i=1; i<= x; i++){
	// 	cout<<heap[i]<<"\n";
	// }
	return 0;
}