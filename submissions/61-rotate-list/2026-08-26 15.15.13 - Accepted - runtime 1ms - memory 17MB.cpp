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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode*temp=head;
        vector<int>ans;
        while(temp!=NULL){

            ans.push_back(temp->val);

            temp=temp->next;
        }
         k=k%ans.size();
        vector<int>st;
        for(int i=ans.size()-k;i<ans.size();i++){

            st.push_back(ans[i]);
        }


        for(int i=0;i<ans.size()-k;i++){
            st.push_back(ans[i]);
        }


        ListNode*newNode=new ListNode(st[0]);
        temp=newNode;
       
        for(int i=1;i<st.size();i++){
            temp->next= new ListNode(st[i]);

            temp=temp->next;
        }


        return newNode;
    }
};

