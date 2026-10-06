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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>ans;

        ListNode*temp=l1;

        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        ListNode*t=l2;
        vector<int>a;

        while(t!=NULL){

            a.push_back(t->val);

            t=t->next;
        }

        vector<int>p;
        int carry=0;
        int i=0;
        while(i<ans.size()||i<a.size()||carry){
            int sum=carry;

            if(i<ans.size()){
                sum+=ans[i];
            }

            if(i<a.size()){
                sum+=a[i];
            }

            p.push_back(sum%10);

            carry=sum/10;
            i++;
        }
            
        ListNode* newNode = new ListNode(p[0]);

        temp=newNode;


        for(int i=1;i<p.size();i++){
            temp->next=new ListNode(p[i]);

            temp=temp->next;
        }

        return newNode;
    }
};

