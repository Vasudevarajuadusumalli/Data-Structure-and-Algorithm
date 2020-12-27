node* insert_after(node* head,node* new_node,int key)
{
    if(head!=NULL)
    {
        node *tp=head,*tmp;
        while(tp->info!=key && tp->next!=NULL)
            tp=tp->next;
        if(tp->info==key)
        {
            tmp=tp->next;
            tp->next=new_node;
            new_node->next=tmp;
            return head;
        }
        else
            printf("\nKey not Found,therefore we can't insert new node after given key node");
    }
    else
    {
        printf("\nLinked List is Empty");
    }
}