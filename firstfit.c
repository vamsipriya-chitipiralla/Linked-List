#include<stdio.h>
#include<conio.h>
#define max 25
int main()
{
	int frag[max],b[max],f[max],i,j,nb,nf,temp,highest=0;
	static int bf[max],ff[max];
	printf("memory management-firstfit\n");
	printf("enter no of blocks:");
	scanf("%d",&nb);
	printf("enter the size of blocks:");
	scanf("%d",&nf);
	for(i=1;i<=nb;i++)
	{
		printf("block %d",i);
		scanf("%d",&b[i]);
	}
	for(i=1;i<=nf;i++)
	{
		printf("size %d",i);
		scanf("%d",&f[i]);
	}
	for(i=1;i<=nf;i++)
	{
		for(j=1;j<=nb;j++)
		{
			if(bf[j]!=1)
				temp=b[j]-f[i];
				if(temp>=0)
					if(highest<temp)
						ff[i]=j;
						highest=temp;
		}
	}
	frag[i]=highest;
	bf[ff[i]]=1;
	highest=0;
	printf("fileno\t\tblockno\t\tblocksize\t\tfragment\n");
	for(i=1;i<=nf;i++)
	{
		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
	}
				
			
		
	
	
}
