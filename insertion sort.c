#include<stdio.h>
int main()
{
     int arr[10],i,n,key,j;
     printf("Enter the size of the array");
     scanf("%d",&n);
      printf("Enter the array.......");
   for(i=0;i<n;i++)
      {
        printf("\n Enter the %d element=",i+1);
        scanf("%d",&arr[i]);
      }
      // code for insertion sort
    for(i=1;i<n;i++)
      {
        key=arr[i];
        j=i-1;
        while(key < arr[j] && j>=0)
               {
                arr[j+1]=arr[j];
                j=j-1;
                }
            arr[j+1]=key;
        }
    
    //end of the code for insertion sort
    printf(" Sorted array is ");
      for(j=0;j<n;j++)
        printf("\t%d",arr[j]);
          return 0;

 }
