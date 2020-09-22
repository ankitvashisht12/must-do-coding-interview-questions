void MyQueue:: push(int x)
{
    QueueNode* node = new QueueNode(x);
    if(front==NULL){
        front=node;
        rear=node;
        return ;
    }
    
    rear->next = node;
    rear = node;
}



/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(!front){
        return -1;
    }
    int val = front->data;
    front = front->next;
    
    
    return val;
}