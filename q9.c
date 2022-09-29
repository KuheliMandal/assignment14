#include<stdio.h>
int main()
{
    int  n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
        printf("Array in reverse order: \n");
    for(i=n-1;i>=0;i--)
    {
printf("%d\n", arr[i]);
    }
    return 0;
}