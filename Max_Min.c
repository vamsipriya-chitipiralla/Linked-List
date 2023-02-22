#include <stdio.h>

void main()
{
    int a[10],i, max, min, n;
    printf("enter the elements:");
    scanf("%d",&n);
   
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
	    printf("a[%d]=",i);
	    scanf("%d",&a[i]);
	}


    max =min= a[0];
    

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }


        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
}
