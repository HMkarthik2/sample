#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
   
   int x= 1994;
   
   int decimal[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   const char* symbol[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   char *r=(char *)malloc(20 *sizeof(char));
   r[0]='\0';
   for(int i=0;x>0;i++){
       while(x>=decimal[i]){
           strcat(r,symbol[i]);
           printf(" r= %s ",r);
           x-=decimal[i];
       }
   }
//    The line roman[0] = '\0'; is used to initialize the character array roman as an empty string.

// In C, a string is represented as an array of characters terminated by a null character ('\0'). By assigning '\0' at the beginning of the roman array, we ensure that it starts as an empty string. This is important because later in the code, we use strcat to append Roman numeral symbols to the roman array. The strcat function expects the destination string to be properly terminated with a null character.

// By initializing roman[0] with '\0', we guarantee that the roman array is an empty string at the beginning, allowing us to use strcat effectively to concatenate Roman numeral symbols without any existing content interfering with the result.

// If the roman array is not properly initialized as an empty string, the strcat function may produce unexpected results or undefined behavior because it expects a null-terminated string as its first argument.

// Therefore, the line roman[0] = '\0'; ensures that the roman array starts as an empty string and allows subsequent concatenation of Roman numeral symbols to build the complete Roman numeral representation.
   
    return 0;
}