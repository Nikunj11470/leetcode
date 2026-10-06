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
    ListNode* partition(ListNode* head, int x) {
        ListNode*list1=new  ListNode(0);
        ListNode*list2=new ListNode(0);

        ListNode*temp1=list1;
        ListNode*temp2=list2;

        while(head!=NULL){
            if(head->val<x){
                temp1->next=head;
                temp1=temp1->next;
            }
            else{
                temp2->next=head;
                temp2=temp2->next;
            }
            head=head->next;
        }
       
        temp1->next=list2->next;
         temp2->next=NULL;
        return list1->next;
    }
};

