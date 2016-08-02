/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd=NULL;
        ListNode *even=NULL;
        ListNode *oddStart=NULL;
        ListNode *evenStart=NULL;
        if(!head)
          return NULL;
        oddStart = head;
        odd = oddStart;
        ListNode * temp;
        if(head->next==NULL)
          return oddStart;
        even = head->next;
        evenStart = even;
        while(head->next!=NULL && head->next->next!=NULL){
            temp = oddStart->next->next;
            evenStart->next = evenStart->next->next;
            oddStart->next=temp;
            head = temp;
            evenStart = evenStart->next;
            oddStart= oddStart->next;
        }
        oddStart->next = even;
        return odd;
    }
};