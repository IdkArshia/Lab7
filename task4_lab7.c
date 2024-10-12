#include <stdio.h>

int main() {
    int len,x,i;
    int min=999999;
    int max=0;
    printf("enter length of array");
    scanf("%d",&len);
    int arr[len];
    
    for(i=0;i<len;i++)
	{
        printf("enter number");
        scanf("%d",&arr[i]);
    }
    printf("%d",arr);
    for(x=0;x<len;x++)
	{
        if (arr[x]<min)
		{
            min=arr[x];
        }
        if (arr[x]>max)
		{
            max=arr[x];
        }
        
    }
    printf("max: %d \n",max);
    printf("min: %d",min);
    return 0;
}
