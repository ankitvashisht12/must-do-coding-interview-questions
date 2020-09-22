#include<stack>


struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    if(!first)
        return second;
    if(!second)
        return first;
        
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    
    Node* a = first;
    Node* b = second;
    
    while(a){
        st1.push(a->data);
        a = a->next;
    }
        
        
    while(b){
        st2.push(b->data);
        b = b->next;
    }
       
        
    int sum = 0;
    int carry = 0;
    while(!st1.empty() && !st2.empty()){
        int val1 = st1.top();
        st1.pop();
        int val2 = st2.top();
        st2.pop();
        
        sum = val1 + val2 + carry;
        carry = sum / 10;
        sum %= 10;
        
        st3.push(sum);
    }
    
    while(!st1.empty()){
        int val1 = st1.top();
        st1.pop();
        
        
        sum = val1 + carry;
        carry = sum / 10;
        sum %= 10;
        st3.push(sum);
    }
    
    while(!st2.empty()){
        int val2 = st2.top();
        st2.pop();
        
        
        sum = val2 + carry;
        carry = sum / 10;
        sum %= 10;
        st3.push(sum);
    }
    
    int val;
    if(carry)    
        val = carry;
    else{
        val = st3.top();
        st3.pop();    
    }
    
    Node* head = new Node(val);
    Node* tail = head;
    while(!st3.empty()){
        val = st3.top();
        st3.pop();
        tail->next = new Node(val);
        tail = tail->next;
      
    }
    
    return head;
    
}