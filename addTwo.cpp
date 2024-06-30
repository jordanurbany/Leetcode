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

#include <iostream>
using namespace std;

// Definition for singly-linked list
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class with addTwoNumbers function
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0); // Dummy head to simplify insertion
        ListNode *tail = dummyHead;            // Pointer to the last node in the result list
        int carry = 0;

        while (l1 || l2 || carry != 0)
        {
            // Extract digits from each list, if one list is shorter, consider 0
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            // Calculate sum and carry-over
            int sum = digit1 + digit2 + carry;
            int total = sum % 10;
            carry = sum / 10;

            // Create a new node with the calculated value and append it to the result list
            tail->next = new ListNode(total);
            tail = tail->next;

            // Move to the next nodes in the input lists
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode *result = dummyHead->next; // Store the result without the dummy head
        delete dummyHead;                   // Delete the dummy head to avoid memory leaks
        return result;                      // Return result
    }
};

// Function to print a linked list
void printList(head)
{
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Solution solution;

    // Test case 1: 243 + 564 = 807
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode *result1 = solution.addTwoNumbers(l1, l2);
    cout << "Test case 1 result: ";
    printList(result1); // Expected: 7 -> 0 -> 8

    // Add more test cases here...

    // Cleanup: Free memory
    while (l1)
    {
        ListNode *temp = l1;
        l1 = l1->next;
        delete temp;
    }
    while (l2)
    {
        ListNode *temp = l2;
        l2 = l2->next;
        delete temp;
    }
    while (result1)
    {
        ListNode *temp = result1;
        result1 = result1->next;
        delete temp;
    }

    return 0;
}
