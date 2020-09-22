bool isPalindrome(Node *head)
{
    if(!head || head->next == NULL)
        return head;
    
    // reverse first half of list and check with 
    // second half of that list.
    Node* prev = NULL;
    Node* fast = head;
    Node* slow = head;
    
    while(fast && slow && fast->next){
        
        fast = fast->next->next;
        Node* temp = slow;
        slow = slow->next;
        
        temp->next = prev;
        prev = temp;
        
    }
    
    // handling odd length list
    if(fast){
        slow = slow->next;
    }
    
    // check palindrome condition from prev pointer 
    // and slow pointer
    
    while(slow && prev){
        if(slow->data != prev->data)
            return false;
        
        slow = slow->next;
        prev = prev->next;
    }
    
    
    if(slow || prev) return false;
    
    return true;
    
    
}