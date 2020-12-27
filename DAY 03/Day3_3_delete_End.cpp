void deleteFromEnd() {  
      
    
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    else {  
        
        if(head != tail ) {  
            struct node *current = head;  
	while(current->next != tail) {  
                current = current->next;  
            }  
            tail = current;  
            tail->next = NULL;  
        }  
        
        else {  
            head = tail = NULL;  
        }  
    }  
}  