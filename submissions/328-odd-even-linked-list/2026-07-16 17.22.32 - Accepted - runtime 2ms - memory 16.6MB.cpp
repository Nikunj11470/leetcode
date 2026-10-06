class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL)
            return NULL;

        vector<int> ans;

        ListNode* temp = head;

        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> odd;
        vector<int> even;

        // i is the INDEX (0-based)
        for (int i = 0; i < ans.size(); i++) {

            if (i % 2 == 0)          // Odd positions: 1,3,5...
                odd.push_back(ans[i]);
            else                     // Even positions: 2,4,6...
                even.push_back(ans[i]);
        }

        ListNode* newHead = new ListNode(odd[0]);
        temp = newHead;

        for (int i = 1; i < odd.size(); i++) {
            temp->next = new ListNode(odd[i]);
            temp = temp->next;
        }

        for (int i = 0; i < even.size(); i++) {
            temp->next = new ListNode(even[i]);
            temp = temp->next;
        }

        return newHead;
    }
};