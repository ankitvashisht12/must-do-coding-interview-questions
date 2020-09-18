#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;

	node(int x){
		data = x;
		next = NULL;
	}
};

void printList(node* node){
	while(node){
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<endl;
}

struct node* reverse(node *head, int k);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct node *head = new node(data);
		struct node *tail  = head;

		for(int i =0; i<n-1; i++){
			cin>>data;
			tail->next = new node(data);
			tail = tail->next;
		}
		int k ;
		cin>>k;

		head = reverse(head, k);

		printList(head);
		cout<<endl;
	}

	return 0;
}


struct node *reverse (struct node *head, int k)
{ 
    node* nextPtr = NULL;
    node* prevPtr = NULL;
    node* currPtr = head;
    int counter = k;
    while(counter-- && currPtr){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    
    if(head != NULL) head->next = reverse(nextPtr, k);
    
    return prevPtr;
}