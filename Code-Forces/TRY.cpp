// author = "akgarhwal"

#include <iostream>
using namespace std;

struct Node
   {
     int data;
     Node *next;
     Node *prev;
   };

  Node* SortedInsert(Node *head,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL){
        head = newNode;
        return head;
    }
    if(head->data > data ){
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *temp = head;
    while(temp->next!=NULL and temp->next->data < data){
        temp =temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next!=NULL){
    	temp->next->prev = newNode;
    }
    temp->next = newNode;


      return head;
    // Complete this function
   // Do not write the main method. 
}
void Print(Node* head){
	if(head==NULL){
		cout<<endl;
		return ;
	}
	cout<<head->data<<" ";
	Print(head->next);
}
int main(){
	Node * head =NULL;
	head = SortedInsert(head,2);
	Print(head);
	head = SortedInsert(head,4);
	Print(head);
	head = SortedInsert(head,8);
	Print(head);
	head = SortedInsert(head,3);
	Print(head);




	return 0;
}