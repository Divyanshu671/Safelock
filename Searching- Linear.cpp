#include<stdio.h>
int main()
{
    int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("\nEnter the sorted elements:-\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i+1);
    else
        printf("Element not found");
    printf("\nDivyanshu Tripathi");
    printf("\n2101641520055");
	printf("\nCS-AI-2A");
  
    return 0;
}
