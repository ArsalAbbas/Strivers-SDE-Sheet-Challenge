#include <bits/stdc++.h> 
// 1 2 3 2 1
//     .   .
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* prev=nullptr;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* next=nullptr;
    while (curr) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(!head) return true;
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;

    while (fast && fast->next) {
    slow=slow->next;
    fast=fast->next->next;
    }
    slow=reverseLinkedList(slow);
    while (slow && head) {
    if(slow->data!=head->data) return false;
    slow=slow->next;
    head=head->next;
    }
    return true;
}
