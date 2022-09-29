#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of Array:\n");
    scanf("%d", &size);
    int a[size],i,max1=0,max2=0;
    printf("Enter 10 elements:\n");
    for(i=0;i<size;i++)
    
    scanf("%d", &a[i]);
    
    for(i=0;i<size;i++)
    {
    
    if(a[i]>max1)
    {
    max2=max1;
    max1=a[i];
    }
    if(a[i]!=max1 && a[i]>max2)
    {
        max2=a[i];
    }
   
    }
     printf("second largest Number= %d", max2);
    printf("\n");
     
    return 0;
}