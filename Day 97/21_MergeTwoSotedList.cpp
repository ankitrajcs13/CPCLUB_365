/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        // For pointing to the first node
        ListNode* tmp = list1;
        // to get the starting element
        // either from l1 or l2
        if(list1->val > list2->val){
            tmp = list2;
            list2 = list2->next;
        }
        else
            list1 = list1->next;
        // To track the next position
        ListNode* curr = tmp;
        while(list1 && list2){
            if(list1 -> val < list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            // updating curr
            curr = curr->next;
        }

        // if any element remains in any list then add it
        if(!list1)
            curr->next = list2;
        else
            curr->next = list1;

        return tmp;

        
        
    }
};