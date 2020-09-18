bool detectLoop(Node* head)
{
    if(!head || head->next == NULL)
        return false;
        
    Node* fast = head->next->next;
    Node* slow = head;
    
    while(fast != slow){
        if(!fast || fast->next == NULL)
            return false;
            
        fast=fast->next->next;
        slow = slow->next;
    }
    
    return true;
}
