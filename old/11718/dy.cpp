#include <stdio.h>
#include <string.h>

int main(void)
{
   char c[101];
   int c_size;
   int count = 0;
   int temp;
   while(count<100)
   {
      fgets(c,sizeof(c),stdin);
      c_size = strlen(c)-1;
      if(c_size  == 0)  break;
      printf("size of c : %d   |   temp : %d\n",c_size,temp);
      if(c[0] == 32 || c[c_size-1] == 32) // if first/last/both character is 'white space' 
         break;
    //   if(c[0] == 10) // if user press 'enter'
    //      break;
      else
      {
         printf("%s",c);
         count++;
      }
   }
   return 0;
}