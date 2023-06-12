Node* mergeLists(Node* head1, Node* head2)
{
    if(!head2) return head1;
    if(!head1) return head2;
    if(head1->data > head2->data) swap(head1,head2);
    Node* res=head1;
    Node* temp=nullptr;

    while (head1 && head2) {
      while (head1 != NULL && head1->data <= head2->data) {
          temp=head1;
          head1=head1->child;
      }
      temp->child=head2;
      swap(head1,head2);
    }
    return res;
}
Node* flattenLinkedList(Node* head) 
{
    if(!head->next)
        return head;
    
    Node *down= head;
    Node *right = head->next;

    right= flattenLinkedList(right);
    down->next= NULL;

    Node *ans=mergeLists(down,right);
    return ans;
}

 
