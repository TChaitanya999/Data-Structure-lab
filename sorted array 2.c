#include<stdio.h>

  int main()

 {
    
     int arr[10],i,n;
 
     printf("Enter the size of the array");
 
     scanf("%d",&n);
 
     printf("Enter the array.......");

     for(i=0;i<n;i++)
  
    {

          printf("\n Enter the %d element=",i+1);
  
          scanf("%d",&arr[i]);

      }

     printf("\n Sorted array is .....");
     
     for(i=0;i<n;i++)
    
     printf("\t%d",arr[i]);
     
     return 0;

 }
