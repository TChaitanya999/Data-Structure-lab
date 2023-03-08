#include<stdio.h>
 int main()
   {
       int arr[20],size,i,j,temp;
       printf("Enter the size of array");
       scanf("%d",&size);
       printf("Enter the elements of array");
       for(i=0;i<size;i++)
         {
              printf("\n Enter the %d element",i+1);
              scanf("%d",&arr[i]);
          }
          // Code for Bubble Sort
          for(i=0;i<size;i++)
          {
              for(j=0;j<size-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
          }
          // End of the Bubble Sort
          printf("\n sorted array is.....");
         for(i=0;i<size;i++)
         printf("\t%d",arr[i]);
 
        return 0;

   }
/*
out put :
Enter the size of array 6
6
Enter the elements of array
 Enter the 1 element7
 Enter the 2 element8
 Enter the 3 element9
 Enter the 4 element4
 Enter the 5 element3
 Enter the 6 element2
 sorted array is.....	2	3	4	7	8	9
*/
