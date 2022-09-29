#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    int arr1[n],arr2[n],i;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
   
   printf("The elements stored in the first array are :\n");
    for(i=0;i<n;i++)
    {
printf("%d\n", arr1[i]);
    }
       for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The elements stored into the second array are :\n");
    for(i=0;i<n;i++)
    {
printf("%d\n", arr2[i]);
    }
     
    printf("\n \n");
return 0;
}