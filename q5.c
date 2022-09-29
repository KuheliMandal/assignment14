#include<stdio.h>
int main()
{
    int size;
    int p[size],i,min;
    printf("Enter Array size:\n");
    scanf("%d", &size);
    printf("Enter 10 No:\n");
    for(i=0;i<size;i++)
    scanf("%d", &p[i]);
    min=p[0];
for(i=0;i<size;i++)
{
    if(min>p[i])
    {
    min=p[i];
    printf("smallest number %d\n", min);
    }
} 
return 0;
}