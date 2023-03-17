#include <stdio.h>
  
void TOH(int n,char x,char y, char z)
 
{
 
    if(n>0)

      {
     
           TOH(n-1,x,y,z);
   
           printf("\n%c to %c",x,y);
   
        TOH(n-1,z,y,x);

       }
    
}
    
 int main()
  
        {
    
            int n=3;
    
           TOH(n,'A','B','C');

   }
out put:
A to B
A to B
C to B
A to B
C to B
C to B
A to B
