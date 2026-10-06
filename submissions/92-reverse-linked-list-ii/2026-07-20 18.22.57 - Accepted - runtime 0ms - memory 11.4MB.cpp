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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        vector<int>ans;


        ListNode*temp=head;

        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        reverse(ans.begin()+left-1,ans.begin()+right);


        temp=head;

        ListNode* newHead = new ListNode(ans[0]);

 temp = newHead;

for (int i = 1; i < ans.size(); i++) {
    temp->next = new ListNode(ans[i]);
    temp = temp->next;
}

return newHead;
    }
};

