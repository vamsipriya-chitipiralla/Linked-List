#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10],i,n,s,flag=0;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
    	//printf("%d",i,a[i]);
        scanf("%d",&a[i]);
    }
    printf("Enter the search element : ");
    scanf("%d", &s);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==s)
        {
			printf("element found\n");
			flag=0;
			break;
        }
        if(flag==1)
      
        {
        	printf("element not found");
		}

    }
    
    
	
}
