#include <stdio.h>
int main()
{
	int i, j, low, key, k, high, mid, n, array[100];
    printf("Enter number of element:");
    scanf("%d",&n);
    printf("\nEnter %d integers:",n);
    for(i = 0; i < n; i++)
	    scanf("%d",&array[i]);    
    printf("\nEnter value to find:");
    scanf("%d", &key);
	for(i=0;i<n;i++){
		k = array[i];
		j = i-1;
		while(j>=0&&array[j]>k){
			array[j+1] = array[j];
			j = j-1;
		}
		array[j+1] = k;
	}
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high){
    	if(array[mid] < key)
		    low = mid + 1;
        else if (array[mid] == key) {
            printf("After sorting %d found at location %d", key, mid+1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high)/2;
    }
    if(low > high)
        printf("Not found! %d isn't present in the list", key);
    printf("\nDivyanshu Tripathi");
    printf("\n2101641520055");
	printf("\nCS-AI-2A");
    return 0;
}
