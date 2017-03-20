Write a Program to communicate between two application


bool isPlin(head,first){
	if(head==null){
		return true;
	}
	bool res = isPlin(head->next,first);
	bool x =true;
	if(first->data != head->data){
		x = false;
	}
	return x and res;
}