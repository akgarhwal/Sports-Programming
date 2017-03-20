// author = "akgarhwal"
/* Linked List Example  */

#include <iostream>
using namespace std;
/* Create a structure of Single Linked List */
struct Node{
	int data;
	Node* next;
};

// Print Single Linked List using Recusion
void Print(Node* head){
	if(head==NULL){
		cout<<endl;
		return ;
	}
	cout<<head->data<<" ";
	Print(head->next);
}

//Print in Reverse order a Single Linked List
void printReverse(Node* head){
	if(head == NULL){
		return ;
	}
	printReverse(head->next);
	cout<<head->data<<" ";
}

//Insert Node at Psoition pos in Single Linked List
// Position start at 1 to length
Node* insertNth(Node* head,int data,int pos){
	// create new Node with data
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;

	if(pos==1){
		temp->next = head;
		head = temp;
		return head;
	}
	Node* travese = head; 
	int co=1;	
	while(co<pos-1 and travese->next != NULL){
		co++;
		travese = travese->next;
	}
	temp->next = travese->next;
	travese->next = temp;
	return head;
}
//Insert at the end of Single Linked List
Node* insertLast(Node *head,int data){
  	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	// for empty Linked List
	if(head==NULL){
        head = temp;
        return head;
    }

	Node* travese = head; 
	while(travese->next != NULL){
		travese = travese->next;
	}
	travese->next = temp;
	return head;
}



// Delete nth Node from Single Linked List
// position of node should be <= length 
Node* deleteNth(Node* head,int pos){

	if(pos==1){
		Node* temp = head;
		free(temp);
		return (head->next);
	}
	Node* temp = head;
	int co=1;
	while(co<pos-1 and temp->next != NULL){
		co++;
		temp = temp->next;
	}
	temp->next = temp->next->next;
	return head;

}

//Reverse a Single Linked List using RECURSION

Node* reverseList(Node* head){
	if(head == NULL){
		return NULL;
	}
	if(head->next == NULL){
		return head;
	}
	Node* rest = reverseList(head->next);
	head->next->next = head;
	head->next =NULL;
	return rest;
}
// Compare two Single linked List 
//if data of node and number of node is equal then true  else FALSE
//Iterative solution
bool compareLists(Node *headA, Node* headB){
    while(headA!=NULL and headB!=NULL and headA->data == headB->data ){
        headA = headA->next;
        headB = headB->next;
    }
    if(headA ==NULL and headB == NULL){
        return true;
    }
    return false;
}
//RECURSIVE Solution
bool compareLists_Recursive(Node *headA,Node *headB){
	if(headA == NULL and headB == NULL){
		return true;
	}
	else if((headA == NULL and headB != NULL) or (headA != NULL and headB == NULL)){
		return false;
	}
	else if(headA->data != headB->data){
		return false;
	}
	return (compareLists_Recursive(headA->next,headB->next));
}


//merge point of Two Single Linked List
//Complexity is O(n+n+n) ==> O(n)
int FindMergeNode(Node *headA, Node *headB)
{
    int lenA = 0;
    Node* temp = headA;
    while(temp!=NULL){
        lenA++;
        temp = temp->next;
    }
    int lenB = 0;
    temp = headB;
    while(temp != NULL){
        lenB++;
        temp = temp->next;
    }
    Node *temp2 = headB;
    temp = headA;
    if(lenA>lenB){
        int co = lenA-lenB;
        while(co--){
            temp = temp->next;
        }
    }
    else if(lenB > lenA){
        int co = lenB-lenA;
        while(co--){
            temp2 = temp2->next;
        }
    }
    while(temp != NULL and temp2 != NULL){
    	if(temp ==temp2){
    		return temp->data;
    	}
        temp =temp->next;
        temp2 = temp2->next;
    }
    return (-1);
}


int main(){
	
	Node *head = NULL;
	head = insertNth(head,1,1);
	head = insertNth(head,2,2);
	head = insertNth(head,3,3);
	head = insertNth(head,4,4);
	head = insertNth(head,5,5);
	head = insertNth(head,6,6); // 1 2 3 4 5 6 



	//printReverse(head);
	//cout<<endl;
	//head = deleteNth(head,2);
	Print(head); 
	head = reverseList(head);
	Print(head);
	


	return 0;
}