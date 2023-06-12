#include <bits/stdc++.h>
//Hashing
// Node* findIntersection(Node *firstHead, Node *secondHead){
//     unordered_map<Node*, bool> mp;
//     while (firstHead && secondHead) {
// if(mp.count(firstHead) > 0) return firstHead;
// if(mp.count(secondHead) > 0) return secondHead;
//     mp[firstHead]=true;
//     mp[secondHead]=true;
//     firstHead=firstHead->next;
//     secondHead=secondHead->next;
//     }
//     return NULL;
// }

//Using Lengths ~ Optimal
 Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* temp1=firstHead;
    Node* temp2=secondHead;
    int l1=0;
    int l2=0;
    while (temp1 || temp2) {
      if (temp1) {
          l1++;
          temp1=temp1->next;
      }
      if (temp2) {
          l2++;
          temp2=temp2->next;
      }
    }
    if(l1>l2) swap(firstHead,secondHead);
    int diff=abs(l1-l2);
    while(diff--) secondHead=secondHead->next;
    while (firstHead && secondHead) {
        if(firstHead==secondHead) return firstHead;
        firstHead=firstHead->next;
        secondHead=secondHead->next;

    }
    return nullptr;
}
