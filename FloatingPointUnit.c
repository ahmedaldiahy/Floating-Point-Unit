 #include <stdio.h>

#include <stdlib.h>


const int a = 142594, b = 178;

int idx = 1;

int d = a/b;

int rem = a%b;

int floating[1000];

int arr[1000];


int main()

{


   while(!arr[rem]){// check if get the same remainder before

       arr[rem] = idx;

       // saving remainder with its position(idx) to know exactly where the repetition happened

       d = (rem*10)/b;

       // remainder became the new result so multiply by '10' to move on

       floating[idx++] = d;

       /* store the current result 'd' with

       its location 'idx' to use it later to determine the start and the end of the repetition*/

       rem = (rem*10)%b;

       //get the remainder to check it and became the new result

   }

   /*

       the loop stop when it find repeated remainder which means it will repeated for infinity

       the last result i get store in index 'idx-1'

       so the result stored in floating

       the repeated starts in 'arr[rem]' and ends in 'idx-1'


   */

   printf("%d.", a/b);

   for(int i = 1; i < idx; i++){

       if(i == arr[rem])printf("(");

       //put '(' before starting repetition

       printf("%d", floating[i]);

       //print result

   }

   printf(")\n\n");

   //put ')' after repetition


   if (floating[arr[rem]] ){ // if the repetition not 'zero'

       for(int i = arr[rem]; i <idx; i++){

           printf("%d", floating[i]);//printed separately in a new line

       }

       printf(" is repeating\n");

   }

   else printf("there is no repetition\n");

   // if the repetition is 'zero' means that division ends when remainder repeated at zero there's no repetition


   return 0;

} 