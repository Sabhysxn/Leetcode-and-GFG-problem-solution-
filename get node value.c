#include <stdio.h>
#include <stdlib.h>
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* p = llist;
    int count = 0;
    while(p != NULL){
        p = p->next;
        count++;
    }

    int s = count - positionFromTail - 1; 
    p = llist;

    for(int i = 0; i < s; i++) {
        p = p->next;
    }
    int val = p->next->data;
    return p->data;
}