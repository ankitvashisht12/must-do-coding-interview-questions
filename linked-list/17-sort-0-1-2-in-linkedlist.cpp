Node* segregate(Node *head) {
    
   int numZeros = 0, numOnes = 0, numTwos = 0;
   Node* temp = head;
   
   while(temp){
       if(temp->data == 0) numZeros++;
       else if(temp->data == 1) numOnes++;
       else numTwos++;
       
       temp = temp->next;
   }
   temp = head;
   while(temp){
       if(numZeros) temp->data = 0, numZeros--;
       else if(numOnes) temp->data = 1, numOnes--;
       else temp->data = 2;
       
       temp = temp->next;
   }
   return head;
}