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
        
    
   Node* prev = NULL;
   Node* curr = head;
   Node* nextPtr;
   
   while(curr){
       nextPtr = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nextPtr;
   }
   
   return prev;
}