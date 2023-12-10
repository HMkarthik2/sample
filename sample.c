struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
          struct ListNode *r=NULL;
          struct ListNode *p=NULL;
         
          while(l1!=NULL || l2!=NULL){
              struct ListNode *tmp=malloc(sizeof(struct ListNode));
              tmp->val=0;
               int k;
              if(l1!=NULL && l2==NULL){
                 k=l1->val;
              }
              else if(l2!=NULL && l1==NULL){
                   k=l2->val;
              }
              else{
              k=(l1->val)+(l2->val);}

              if(k>9){

                  k=k%10;
                  struct ListNode *w=malloc(sizeof(struct ListNode));
                  w->val=1;
                 tmp->next=w;
              }
              
              
                 tmp->val=tmp->val+k; 
            //   tmp->next=NULL;
             if(r==NULL){
                 r=tmp;
                 p=r;
             }
             else{
                 p->next=tmp;
                 p=p->next;
             }
             if(l1!=NULL){
            l1=l1->next;}
            if(l2!=NULL){
            l2=l2->next;}
          }

          return r;