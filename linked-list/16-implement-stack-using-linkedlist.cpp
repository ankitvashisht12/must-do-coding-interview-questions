void MyStack ::push(int x) {
   StackNode* node = new StackNode(x);
   
   if(!top){
       top = node;
   }else{
       node->next = top;
     
       top = node;
   }
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(top == NULL)
        return -1;
        
    int val = top->data;
    StackNode* temp  = top;
    top = top->next;
    free(temp);
    return val;
}
