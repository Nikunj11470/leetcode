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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int>ans;

        ListNode*temp=list1;

        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        vector<int>p;
        for(int i=0;i<a;i++){
            p.push_back(ans[i]);
        }

        vector<int>q;

        ListNode*temp1=list2;

        while(temp1!=NULL){
            q.push_back(temp1->val);
            temp1=temp1->next;
        }




        for(int i=0;i<q.size();i++){
            p.push_back(q[i]);
        }


        for(int i=b+1;i<ans.size();i++){
            p.push_back(ans[i]);
        }


        ListNode*newNode=new ListNode(p[0]);
        temp=newNode;

        for(int i=1;i<p.size();i++){
            temp->next=new ListNode(p[i]);
            temp=temp->next;
        }

        return newNode;
    }
};

