 int intersectPoint(Node* head1, Node* head2)
    {
      Node* list1 = head1;
    Node* list2 = head2;
    
    while(list1 != list2){
        
        if(list1 == NULL) list1 = head2;
		else list1 = list1->next;
            
        if(list2 == NULL) list2 = head1;
		else list2 = list2->next;    
    
    }
    
	if(list1 != NULL)
		return list1->data;
	else return -1;
        
        
        
    }

