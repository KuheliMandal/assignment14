#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<=9;i++)
    scanf("%d", &a[i]);
    for(i=0;i<=9;i++)
    sum=sum=a[i];
    avg=a[i]/10;
    printf("average is: %f \n", avg);
    return 0;
}