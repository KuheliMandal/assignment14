#include<stdio.h>
#include<limits.h>
int main()
{
    int size;
    printf("Enter size of Array:\n ");
    scanf("%d", &size);
    int a[size],i,min1=0,min2=0;
    printf("Enter elements:\n");
    for(i=0;i<size;i++)
    scanf("%d", &a[i]);
    min1=INT_MAX;
    min2=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(a[i]<min1)
        {
        min2=min1;
        min1=a[i];
        }

      if(a[i]>min1 && a[i]<min2)
    {
        min2=a[i];
    }

    }
    printf("The second smallest Element:\n");
       printf("%d", min2 );
       return 0;
   
}