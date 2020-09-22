Node* loopTail(Node* head){
    if(!head)
        return NULL;
        
    Node* fast = head;
    Node* slow = head;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            break;
        }
    }
    
    return fast;
}

void removeLoop(Node* head)
{   
    
    
    Node* loopNode = loopTail(head);
    if(loopNode != NULL && head != NULL){
        while(loopNode != head){
            head = head->next;
            loopNode = loopNode->next;
        }
        
        while(loopNode->next != head)
            loopNode = loopNode->next;
            
        loopNode->next = NULL;
    }
}