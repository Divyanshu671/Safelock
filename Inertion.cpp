#include <stdio.h>
int main()
{
    int arr[100];
    int i, x, pos, n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the number to insert in array:");
    scanf("%d",&x);
    printf("\nEnter the position to insert the number:");
    scanf("%d",&pos);
    n++;
    for (i = n-1;i>= pos;i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
 
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nDivyanshu Tripathi");
	printf("\nCS-AI-2A");
 
    return 0;
}
