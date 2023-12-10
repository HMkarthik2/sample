 
 struct ListNode *newList(int k,struct ListNode *head,struct ListNode *last){
//       printf("%d ",k);
//       struct ListNode *temp= malloc(sizeof(struct ListNode));
//       temp->val=k;
//     //   if(last==NULL){
//     //       last=temp;
//     //       head=temp;
//     //   }
//     //   else{
//     //       last->next=temp;
//     //       last=last->next;
//     //   }
//       return temp;
//   }
struct ListNode *head=NULL;
     struct ListNode *last=NULL;

     while(list1!=NULL && list2 !=NULL){
         if(list1->val <= list2->val){
            last= newList(list1->val,head,last);
            if(head==NULL){
                head=last;
            }
             list1=list1->next;
         }
         else{
             last= newList(list2->val,head,last);
             if(head==NULL){
                head=last;
            }
             list2=list2->next;
         }
     }
     
     
      if(list1==NULL && list2!=NULL){
         if(last==NULL){
             head=list2;
         }
         else{
         last->next=list2;
         }
        //  return head;
     }
     else if(list1!=NULL && list2==NULL){
         if(last==NULL){
             head=list1;
         }
         else{
           last->next=list1;  
         }
         
        //  return head;
     }
     
     return head;