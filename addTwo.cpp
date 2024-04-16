// runtime complexity O(n+n2)
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
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0);
        ListNode *tail = dummyHead;
        int carry = 0;

        int digit1 = (l1 != nullptr) ? l1->val : 0;
        int digit2 = (l2 != nullptr) ? l2->val : 0;

        int sum = (digit1 + digit2 + carry);
        int total = sum % 10;
        carry = sum / 10;

        // Create a new node with the sum and append it to the result list
        ListNode *newNode = new ListNode(total);
        tail->next = newNode;
        tail = newNode;

        // Move to the next nodes in the input lists
        l1 = (l1 != nullptr) ? l1->next : nullptr;
        l2 = (l2 != nullptr) ? l2->next : nullptr;
    }
    // Store the head of the result list
    ListNode *result = dummyHead->next;
    // Deallocate memory for the dummy head node
    delete dummyHead;
    return result;
};