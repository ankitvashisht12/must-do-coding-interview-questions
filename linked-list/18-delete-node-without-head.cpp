void deleteNode(Node *node)
{
    
    
   Node* prev;
   while(node){
       if(node->next){
           node->data = node->next->data;
           prev = node;
       }
       
       node = node->next;
       
   }
   
    if(prev)
        prev->next = NULL;
   
   
   
}
