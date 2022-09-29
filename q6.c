#include<stdio.h>
int main()
{
    int size;
    printf("Enter Array size:\n");
    scanf("%d", &size);
    int a[size],i,j,temp;
    printf("Enter 10 elements:\n");
    for(i=0;i<size;i++)
    scanf("%d", &a[i]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
         
    
            }
        
            
        }
    }
    printf("The numbers arranged in ascending order are given below :\n");
    for(i=0;i<size;i++)
     printf("%d\n", a[i]);
    
    return 0;
}