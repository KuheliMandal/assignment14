#include<stdio.h>
int main()
{
    int size;
    printf("Enter Array size:\n");
    scanf("%d",&size);
    int a[size],i,sum,evensum=0,oddsum=0;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<size;i++)
    scanf("%d", &a[i]);
for(i=0;i<size;i++){
    if(a[i]%2==0)
    {
    evensum=evensum+a[i];
    printf("Sum of all even  no.:%d\n", evensum);
    }
    else
    oddsum=oddsum+a[i];
    printf("Sum of all odd no.: %d\n", oddsum);
}
return 0;
}