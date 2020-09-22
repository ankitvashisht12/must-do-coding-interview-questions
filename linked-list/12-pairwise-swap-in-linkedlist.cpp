Node* pairWiseSwap(struct Node* head) {
    
    if(!head)
        return NULL;
    
    Node* prev = head;
    Node* curr = head->next;
    
    while(curr){
        
            
        int tempData = prev->data;
        prev->data = curr->data;
        curr->data =tempData;
        
        if(!prev || !curr || !curr->next)
            break;
        
        prev = prev->next->next;
        curr = curr->next->next;
    }
    
    return head;
}