class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> ans;

        ListNode* temp = head;

        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        unordered_map<int,int> mp;

        for(int x : ans) {
            mp[x]++;
        }

        vector<int> st;

        for(int x : ans) {
            if(mp[x] == 1) {
                st.push_back(x);
            }
        }

        if(st.size() == 0) {
            return NULL;
        }

        ListNode* newNode = new ListNode(st[0]);

        temp = newNode;

        for(int i = 1; i < st.size(); i++) {
            temp->next = new ListNode(st[i]);
            temp = temp->next;
        }

        return newNode;
    }
};