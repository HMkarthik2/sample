#include <stdio.h>
int main()
{
    char * s= "cbbd";
    // char *r="nopalindrome";
    char x;
    int n=1,j,m=0;
    for(int i=0;i<4;i++){
        x=s[i];
        printf(" %c ",x);
        j=i+1;
        while(x!=s[j]){
            j++;
        }
        printf(" %c = %c at %d ",x,s[j],j);
         m= (j-i)/2 +1;
         int p=(j-i)/2 +1;
         printf(" m= %d ",m);
        for(int k=0;k<m;k++){
            if(s[i+k]!=s[j-k]){
                printf(" since %c != %c in the palindrome %c to %c so n=0",s[i+k],s[j-k],x,s[j]);
                n=0;
                break;
            }
            
        }
        if(n!=0 && m >=p){
            for(int k=i;k<=j;k++){
                // r+=s[k];
                // printf(" %s ",r);
                printf(" %c ",s[k]);
            }
        }
        
        printf(" \n ");
    }
    
    return 0;
}
