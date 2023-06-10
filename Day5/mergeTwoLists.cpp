#include <bits/stdc++.h>
// head1
// 1->3->5->7
// 2->4->6->8
Node<int>* sortTwoLists(Node<int>* head1, Node<int>* head2)
{
    if(!head2) return head1;
    if(!head1) return head2;
    if(head1->data > head2->data) swap(head1,head2);
    Node<int>* res=head1;
    Node<int>* temp=nullptr;

    while (head1 && head2) {
      while (head1 != NULL && head1->data <= head2->data) {
          temp=head1;
          head1=head1->next;
      }
      temp->next=head2;
      swap(head1,head2);
    }
    return res;
}
