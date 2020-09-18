#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;

	Node(int x){
		data = x;
		next = NULL;
	}
};

void printList(Node* node){
	while(node){
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<endl;
}

int intersectPoint(Node *head1, Node* head2);

Node* inputList(int size){
	if(size == 0) return NULL;

	int val;
	cin>>val;

	Node* head = new Node(val);
	Node* tail = head;

	for(int i = 0; i <size-1; i++){
		cin>>val;
		tail->next = new Node(val);
		tail = tail->next;
	}

	return head;
}

int main(){
	int t, n1, n2, n3;
	cin>>t;
	while(t--){
		
		cin>>n1>>n2>>n3;

		Node *head1 = inputList(n1);
		Node *head2  = inputList(n2);
		Node* common = inputList(n3);

		Node* temp = head1;

		while(temp != NULL && temp->next != NULL)
			temp = temp->next;
		if(temp!=NULL) temp->next = common;

		temp = head2;
		while(temp!= NULL && temp->next != NULL)
			temp = temp->next;

		if(temp!=NULL) temp->next = common;

		
		cout<<intersectPoint(head1, head2)<<endl;
	}

	return 0;
}


int intersectPoint(Node* head1, Node* head2)
{
    Node* list1 = head1;
    Node* list2 = head2;
    
    while(list1 != list2){
        
        if(list1 == NULL) list1 = head2;
		else list1 = list1->next;
            
        if(list2 == NULL) list2 = head1;
		else list2 = list2->next;    
    
    }
    
	if(list1 != NULL)
		return list1->data;
	else return -1;
}
