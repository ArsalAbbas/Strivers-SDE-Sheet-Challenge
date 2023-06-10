#include <bits/stdc++.h>

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
