// k=3
// count=3
// 1 2 3
//       f
// s
//p
Node* removeKthNode(Node* head, int K){
    Node* fast=head;
    Node* slow=head;
    Node* prev=nullptr;

    int count=1;
    while (fast) {
      if (count > K) {
      prev=slow;
      slow = slow->next;
      }
      else
      count++;
      fast = fast->next;
    }
    if(prev) prev->next=slow->next;
    else head=slow->next;
    return head;

}
