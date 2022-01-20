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
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL || head->next->next == NULL) {
            return head;
        }
        else {
            ListNode* odd = head;
            ListNode* even = head->next;
            ListNode* evenhead = even;

            while (even != NULL && even->next != NULL) {

                odd->next = even->next;
                odd = even->next;

                even->next = odd->next;
                even = odd->next;

            }
            odd->next = evenhead;

        }
        return head;


    }
};
/*
Runtime: 27 ms, faster than 5.10% of C++ online submissions for Odd Even Linked List.
Memory Usage: 10.4 MB, less than 71.64% of C++ online submissions for Odd Even Linked List.
*/