// author = "akgarhwal"
//Binary Tree and Binary Search Tree

#include <iostream>
#include <queue> // for levelOrder traversal
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int val):data(val),left(NULL),right(NULL){
		//
	}
};

//this Function search en item in binary tree and return reference to that node
Node* isPresent(Node *root,int val){
	if(root == NULL){
		return root;
	}
	else if(val < root->data){
		return isPresent(root->left,val);
	}
	else if(val > root->data){
		return isPresent(root->right,val);
	}
	return root;
}
//Find minimum in Binary Search tree
//go left and you will find minimum
Node* minimum(Node *root){
	if(root == NULL){
		return NULL;
	}
	if(root->left == NULL){
		return root;
	}
	return minimum(root->left);;
} 
// find Maximum
Node* maximum(Node *root){
	if(root == NULL){
		return NULL;
	}
	if(root->right == NULL){
		return root;
	}
	return maximum(root->right);
} 


//insert into Binary Search tree
//iterative approach
Node* insert(Node *root,int val){
	Node *temp = new Node(val);

	if(root == NULL){
		root = temp;
		return root;
	}
	Node *temp2 = root; 
	while(temp2 != NULL){
		if(val <= temp2->data and temp2->left != NULL){
			temp2 = temp2->left;
		}
		else if(val >= temp2->data and temp2->right != NULL){
			temp2 = temp2->right;
		}
		else{
			break;
		}
	}
	if(val >= temp2->data){
		temp2->right = temp;
	}
	else{
		temp2->left = temp;
	}
	
	return root;
} 
//recursive approach
void insert_recursive(Node* &root,int val){
	if(root == NULL){
		root = new Node(val);
	}
	else if(val < root->data){
		insert_recursive(root->left,val);
	}
	else if(val > root->data){
		insert_recursive(root->right,val);
	}	
}



//Delete from Binary Search Tree
//recursive appraoch
void delete_recursive(Node* &root,int val){
	if(root == NULL){
		return ;//no node found
	}
	else if(val < root->data){
		delete_recursive(root->left,val);
	}
	else if(val > root->data ){
		delete_recursive(root->right,val);
	}
	else if(root->left != NULL and root->right != NULL){
		// two children case
		root->data = minimum(root->right)->data;
		delete_recursive(root->right,root->data);
	}
	else{
		Node* temp = root;
		root = (root->left == NULL)?(root->right):(root->left);
		delete temp;
	}
}




// Tree traversal
// inorder
void inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
// preorder
void preorder(Node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
// postorder
void postorder(Node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
// Level Order Traversal
void levelOrder(Node *root){
	queue<Node *> q;
	q.push(root);
	while(!(q.empty())){
		Node* temp = q.front();q.pop();
		cout<<temp->data<<" ";
		if(temp->left != NULL){
			q.push(temp->left);
		}
		if(temp->right != NULL){
			q.push(temp->right);
		}
	}
}



//Height of BST
// a tree with single node has height 0;
int getheight(Node *root){
	if(root  == NULL){
		return -1;
	}
	return 1+max(getheight(root->left),getheight(root->right));
} 


// Is This a Binary Search Tree?
bool checkBSTUtil(Node* root,int min,int max){
    if(root == NULL){
          return true;
    }
    if(!(root->data > min and root->data < max)){
        return false;
    }
    return checkBSTUtil(root->left,min,root->data) and checkBSTUtil(root->right,root->data,max);
}
bool checkBST(Node* root) {
    return checkBSTUtil(root,0,10001);
       
}








// testing 
int main(){
	
	Node *root = NULL;
	// root = insert(root,10);
	// root = insert(root,5);
	// root = insert(root,15);
	// root = insert(root,20);
	// root = insert(root,13);
	// root = insert(root,8);
	// root = insert(root,9);
	// root = insert(root,18);
	
	insert_recursive(root,10);
    insert_recursive(root,5);
	insert_recursive(root,15);
	insert_recursive(root,20);
	insert_recursive(root,13);
	insert_recursive(root,8);
	insert_recursive(root,9);
	insert_recursive(root,18);

	levelOrder(root);

	// cout<<getheight(root)<<endl;
	// delete_recursive(root,9);
	// cout<<getheight(root);
	
	// inorder(root);
	// cout<<endl;
	// delete_recursive(root,10);
	// inorder(root);
	// cout<<endl;

	// preorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;

	//cout<<(minimum(root))->data<<endl;
	//cout<<(maximum(root))->data<<endl;
	
	return 0;
}