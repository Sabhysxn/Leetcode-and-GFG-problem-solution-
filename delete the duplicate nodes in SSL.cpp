#inlclude<bits/stdc++.h>
using namespace std;
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (llist==nullptr) return llist;

    SinglyLinkedListNode* curr = llist;

    while(curr!=NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            SinglyLinkedListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return llist;
}
int main() {
    return 0;
}