/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
struct ListNode* p1 = list1;
    struct ListNode* p2 = list2;
    struct ListNode* ptr = NULL;
    struct ListNode* cpt = NULL;
    struct ListNode* start=NULL;

    if (p1 == NULL) {
        start = p2;
        return start;
    }
    if (p2 == NULL) {
        start = p1;
        return start;
    }

    if (p1->val < p2->val) {
        ptr = p1;
        p1 = p1->next;
    } else {
        ptr = p2;
        p2 = p2->next;
    }
    start = ptr;

    while (p1 != NULL && p2 != NULL) {
        if (p1->val < p2->val) {
            cpt = p1;
            p1 = p1->next;
        } else {
            cpt = p2;
            p2 = p2->next;
        }
        ptr->next = cpt;
        ptr = cpt;
    }

    if (p1 != NULL) {
        ptr->next = p1;
    } else {
        ptr->next = p2;
    }
    return start;
}
