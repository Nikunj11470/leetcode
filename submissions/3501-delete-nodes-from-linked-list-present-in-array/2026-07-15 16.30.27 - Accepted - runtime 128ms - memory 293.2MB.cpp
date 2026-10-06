class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        vector<int> arr;

        ListNode* temp = head;

        // Store linked list values in a vector
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Store nums in a hash set
        unordered_set<int> st(nums.begin(), nums.end());

        // Keep only values not present in nums
        vector<int> ans;

        for(int x : arr){
            if(!st.count(x)){
                ans.push_back(x);
            }
        }

        // If no nodes remain
        if(ans.empty()){
            return NULL;
        }

        // Build the new linked list
        ListNode* newHead = new ListNode(ans[0]);
        temp = newHead;

        for(int i = 1; i < ans.size(); i++){
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }

        return newHead;
    }
};