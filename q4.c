#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array:\n");
    scanf("%d", &size);
    int a[size],i;
   int max=a[0];
    printf("Enter 10 no.:\n");
    for(i=0;i<size;i++)
    scanf("%d", &a[i]);
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        printf("greatest number: %d\n", max);
    }
    else
    printf(" ");
    }
    return 0;
}