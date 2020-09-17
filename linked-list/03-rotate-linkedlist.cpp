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

struct Node* rotateLinkedList(Node *head, int k);

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
		int k ;
		cin>>k;

		head = rotateLinkedList(head, k);

		printList(head);
		cout<<endl;
	}

	return 0;
}

struct Node* rotateLinkedList(Node *head, int k)
{
   
     if(!head)
        return head;
        
    Node* prev = NULL;
    Node* curr = head;
    
    for(int i=0; i<k; i++){
        prev = curr;
        curr = curr->next;
    }
    
    if(!curr)
        return head;
    
    prev->next = NULL;
    prev = curr;
    
    while(curr->next){
        curr = curr->next;
    }
    
    while(k--){
        curr->next = head;
        head = head->next;
        curr = curr->next;
    }
    
    return prev;
}