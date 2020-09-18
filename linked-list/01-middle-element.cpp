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

int getMiddle(Node *head);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail  = head;

		for(int i =0; i<n-1; i++){
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}

		cout<<getMiddle(head)<<endl;
	}

	return 0;
}

// Algorithm : 

// 1. we can count the length by iterating over the list
// 2. we need middle position of the list. we can get it by dividing the length by 2.
// 3. return middle node's data





























int getMiddle(Node *head)
{	

	// temporary pointer pointing to head.
	Node* temp = head;
	int len = 0;

	// iterating and calculating the length.
	while(temp != NULL){
	    temp = temp -> next;
	    len++;
	}
   
	// dividing the length by 2 to get the middle position of the list.
	int mid = len/2;
  
	// iterating till middle element of the list.
	while(mid){
		head = head->next;
		mid--;
	}
	
	return head->data;
}