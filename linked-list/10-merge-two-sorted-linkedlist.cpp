Node* sortedMerge(Node* a, Node* b)  
{  
    if(!a)
        return b;
        
    if(!b)
        return a;
    Node* result;
    if(a->data < b->data){
        result = a;
        result->next = sortedMerge(a->next, b);
    }else{
        result = b;
        result->next = sortedMerge(a, b->next);
    }
    
    return result;
} 