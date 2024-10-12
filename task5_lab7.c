#include <stdio.h>
int main()
{
    int temp[7],j;
    int ext[7];
    int i=1;
    int sum=0;
    int x=0;
    int avg;
    for(i=0;i<7;i++)
	{
        printf("enter the temperature for day %d ",i+1);
        scanf("%d",&temp[i]);
        sum=sum+temp[i]; 
        if (temp[i]>40 || temp[i]<0)
		{ 
            ext[x]=i+1;
            x=x+1;
        }
    }
    avg=sum/7;
    
    if (x<0)
    {
    printf("Average temperature: %d , Extreme temperature:",avg);
    }
    else
	{
        printf("Average temperature: %d, Extreme temperature on day %d ",avg,ext[0] );
        for(j=1;j<x;j++)
		{
            
            printf("and day %d ",ext[j]);
        }
    }
    return 0;
}