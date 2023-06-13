//Approach 1 : 
//Time: O(n + (k%n)*n)
// int listLength(Node *head) {
//      int count=0;
//      Node* temp=head;
//      while(temp){
//           count++;
//           temp=temp->next;
//      }
//      return count;
// }
// Node *rotate(Node *head, int k) {
//      int len=listLength(head);
//      k=k%len;

//      while (k--) {
//           Node* tempHead=head;
//           Node* prev=nullptr;
//           while (tempHead->next) {
//           prev=tempHead;
//           tempHead = tempHead->next;
//           }
//           prev->next=nullptr;
//           tempHead->next=head;
//           head=tempHead;
//      }
//      return head;
// }

// Optimized
Node *rotate(Node *head, int k) {
     int count=1;
     Node* temp=head;
     while(temp->next){
          count++;
          temp=temp->next;
     }
     temp->next=head;
     k=k%count;
     int link=count-k;
     while(link--) temp=temp->next;
     head=temp->next;
     temp->next=NULL;
     
     return head;
}
