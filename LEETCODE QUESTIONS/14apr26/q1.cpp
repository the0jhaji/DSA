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

//Given the head of a linked list, rotate the list to the right by k places.class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;

        // Step 1: Find length
        ListNode *temp = head;
        int length = 1;
        while (temp->next)
        {
            temp = temp->next;
            length++;
        }

        // Step 2: Make it circular
        temp->next = head;

        // Step 3: Reduce k
        k = k % length;

        // Step 4: Find new tail
        int stepsToNewTail = length - k;
        ListNode *newTail = head;

        for (int i = 1; i < stepsToNewTail; i++)
        {
            newTail = newTail->next;
        }

        // Step 5: Break the circle
        ListNode *newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};