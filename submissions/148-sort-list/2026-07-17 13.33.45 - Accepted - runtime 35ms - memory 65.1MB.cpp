class Solution {
public:
    ListNode* sortList(ListNode* head) {

        if (head == nullptr)
            return nullptr;

        vector<int> ans;

        ListNode* temp = head;

        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        sort(ans.begin(), ans.end());

        ListNode* newHead = new ListNode(ans[0]);
        temp = newHead;

        for (int i = 1; i < ans.size(); i++) {
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }

        return newHead;
    }
};