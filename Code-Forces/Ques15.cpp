// author = "akgarhwal"

#include <iostream>
using namespace std;

int interpoint(node* head1,node* head2){
	node* temp1 = head1;
	node* temp2 = head2;
	while(temp1!=NULL){
		temp2 = head2;
		while(temp2 != NULL){
			if(temp1 == temp2){
				return temp1;
			} 
			temp2 = temp2->next;
		}
		temp1 = temp1->next; 
	}
}


int main(){
	
	return 0;
}