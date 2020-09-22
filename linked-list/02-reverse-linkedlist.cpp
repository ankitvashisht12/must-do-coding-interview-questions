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

struct Node* reverseLinkedList(Node *head);

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

		head = reverseLinkedList(head);

		printList(head);
		cout<<endl;
	}

	return 0;
}

































struct Node* reverseLinkedList(Node *head)
{
   
    if(!head || head->next == NULL)
        return head;
        
   //  1. initialize 3 pointers i.e previous, current and next pointer
   //  2. set prev = NULL and curr = head.
   Node* prev = NULL;
   Node* curr = head;
   Node* nextPtr;
   

   //3. In while loop : 
   //		3.a ) set nextPtr = curr -> next
   // 		3.b ) set curr->next = prev
   //       3.c ) set prev = curr 
   //		3.d ) set curr = nextPtr
   while(curr){
       nextPtr = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nextPtr;
   }
   
   // 4. return previous pointer.
   return prev;
}