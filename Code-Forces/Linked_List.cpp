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


//return nth Node from Last
// 1 for last element
Node* nthFromLast(Node *head,int n,int& i){
	if(head == NULL){
		return 0;
	}
	Node *res = nthFromLast(head->next,n,i);
	i++;
	if(i==n){
		return head;
	}
	return res;
}

Node* nthFromLast(Node *head,int n){
	int i=0;
	return nthFromLast(head,n,i);
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

//Check Linked List is PALINDROME or NOT
//but this is not good approach try to modify it later....
Node* first;
// bool isPalin(Node* head){
// 	if(head==NULL){
// 		return true;
// 	}
// 	bool res = isPalin(head->next);
// 	bool x =true;
// 	if(first->data != head->data){
// 		x = false;
// 		//cout<<"F = "<<first->data<<"  SS = "<<head->data<<endl;
// 	}
// 	// else{
// 	// 	//cout<<"F = "<<first->data<<"  SS = "<<head->data<<endl;
// 	// }
// 	first = first->next;
// 	return x and res;
// }
//SECOND SLOUTION
//Somewhat better than first
bool isPalinUtil(Node* head,Node* &first){
	if(head==NULL){
		return true;
	}
	bool res = isPalinUtil(head->next,first);
	bool x =((first)->data == head->data);
	//cout<<first->data <<" # "<<head->data;
	//cout<<"X :: "<<x<<endl;
	first = (first)->next;
	return x and res;
}
bool isPalin(Node* head){
	return isPalinUtil(head,head);
}


//this Function remove duplicate from linked list 
//if and only if linked list is SORTED
Node* RemoveDuplicates(Node *head){   
    Node *temp = head;
    Node *temp2 = head;
    while(temp!=NULL and temp->next!=NULL){
        temp2 =temp->next;
        while(temp2!=NULL and temp->data == temp2->data){
            temp2 = temp2->next;
        }
        temp->next = temp2;
        temp = temp2;
        
    }
    return head;
}

//Cycle detection in linked list 
bool has_cycle(Node* head) {
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && slow != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) {
            return 1;
        }
    }
    return 0;
}





int main(){
	
	Node *head = NULL;
	head = insertNth(head,1,1);
	head = insertNth(head,2,2);
	head = insertNth(head,3,3);
	head = insertNth(head,3,4);
	head = insertNth(head,2,5);
	//head = insertNth(head,1,6); // 1 2 3 4 5 6 
	Print(head); 


	cout<<isPalin(head)<<endl;
	//printReverse(head);
	//cout<<endl;
	//head = deleteNth(head,2);
	
	//Node *temp = nthFromLast(head,2);
	//cout<<"VAL : "<<temp->data<<endl;

	
	//head = reverseList(head);
	//Print(head);
	


	return 0;
}