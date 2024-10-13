struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count = 0;
    struct ListNode* ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    
    ptr = head;
    int index = count - n;
    
    if (index == 0) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    for (int i = 0; i < index - 1; i++) {
        ptr = ptr->next;
    }
    
    if (ptr != NULL) {
        struct ListNode* temp = ptr->next;
        if (temp != NULL) {
            ptr->next = temp->next;
            free(temp);
        } else {
            ptr->next = NULL;
        }
    }
    
    return head;
}
