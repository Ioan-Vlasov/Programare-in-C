struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int transport=0,cifra;
    struct ListNode *lfinal,*lfinalcurent;
    cifra=l1->val+l2->val;
    lfinal=(struct ListNode *)malloc(sizeof(struct ListNode));
    lfinalcurent=lfinal;
    while(l1!=NULL&&l2!=NULL)
    {
        lfinalcurent->next=(struct ListNode *)malloc(sizeof(struct ListNode));
        cifra=l1->val+l2->val+transport;
        lfinalcurent->next->val=cifra%10;
        transport=cifra/10;
        lfinalcurent=lfinalcurent->next;
        l1=l1->next;
        l2=l2->next;
    }
    if (l1 == NULL)
        l1 = l2;
    while(l1!=NULL)
    {
        lfinalcurent->next=(struct ListNode *)malloc(sizeof(struct ListNode));
        cifra=l1->val+transport;
        lfinalcurent->next->val=cifra%10;
        transport=cifra/10;
        lfinalcurent=lfinalcurent->next;
        l1=l1->next;
    }
    if (transport==1)
    {
        lfinalcurent->next=(struct ListNode *)malloc(sizeof(struct ListNode));
        lfinalcurent->next->val=1;
        lfinalcurent->next->next=NULL;
    }
    else
        lfinalcurent->next=NULL;
    return lfinal->next;
}
