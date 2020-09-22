int getNthFromLast(Node *head, int n)
{   
    
    if(!head)
        return -1;
    int len = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        len++;
    }
    
    int k = len - n;
    
    if(k < 0) return -1;
    
    temp = head;
    
    for(int i =0; i < k; i++){
        temp = temp->next;
    }
    
    return temp->data;
}

