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

   
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode*temp=head;
        int n=0;

        while(temp!=NULL){
           
            temp=temp->next;
             n++;
            
        }

        int pos1=k;
        int pos2=n-k+1;
        ListNode*first=head;
        ListNode*second=head;

        for(int i=1;i<pos1;i++){
            first=first->next;
        }

        for(int i=1;i<pos2;i++){
            second=second->next;
            }
            swap(first->val,second->val);

            return head;
            }
};


