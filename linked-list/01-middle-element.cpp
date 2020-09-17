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

int getMiddle(Node *head)
{
   Node* temp = head;
   int len = 0;
   while(temp != NULL){
        temp = temp -> next;
        len++;
   }
   
   int mid = len/2;
  
   while(mid){
       head = head->next;
       mid--;
   }
   
   return head->data;
}