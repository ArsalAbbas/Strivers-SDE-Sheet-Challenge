bool detectCycle(Node *slow)
{
    Node* fast=slow;
    while (fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow) return true;
    }
    return false;
}
