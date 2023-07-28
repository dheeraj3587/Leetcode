class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* Fast=head;
        ListNode* Slow=head;
        while(Fast!=nullptr && Fast->next!=nullptr){
            Fast=Fast->next->next;
            Slow=Slow->next;
        }
        return Slow;
    }
};
