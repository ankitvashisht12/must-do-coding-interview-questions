
Node* merge(Node* a, Node* b){
    if(!a)
        return b;
    if(!b)
        return a;
        
    Node* result;
    if(a->data < b->data){
        result = a;
        result->bottom = merge(a->bottom , b);
    }else{
        result = b;
        result->bottom = merge(a, b->bottom);
    }
    
    result->next = NULL;
    return result;
}


/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
    if(!root || root->next ==NULL)
        return root;
    
    return merge(root, flatten(root->next));
    
}
