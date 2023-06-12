Node *firstNode(Node *slow)
{
    Node* fast=slow;
    Node* temp=slow;
    while (fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
        if (fast == slow) {
            while(slow!=temp){
                slow=slow->next;
                temp=temp->next;
            }
            return temp;
        }
    }
    return NULL;
}
