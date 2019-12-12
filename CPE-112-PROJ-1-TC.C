#include<stdio.h>
main()
{
 long int num[1000],digit[1000],factor[1000],rem[1000];
 long int i,size=0,t,j,x,n;
 clrscr();

 printf("Input Numbers: ");

 for(i=0;;i++)
	{
		scanf("%ld", &num[i]);
		if (num[i]==0)
			{
			 break;
			}
		size++;
	}

 for(i=0;i<size;i++)
	{
		n=num[i];
		x=n;
		digit[i]=0;

		for(;n!=0;)
			{
				n=n/10;
				digit[i]++;
			}

			t=0;
			j=2;
			factor[i]=0;

			for(;x!=0;)
			{
				if(x%j==0)
				{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;

					if(x==1)
						{
							break;
						}
				}
				else
				{
					j++;
				}
			}
	}
 printf("\n");
 printf("1 - NON-WASTEFUL NUMBER/S:");
 for(i=0;i<size;i++)
	{
		if(factor[i]<=digit[i])
			{
				printf(" %ld",num[i]);
			}
	}

 printf("\n");
 printf("\n2 - WASTEFUL NUMBER/S:");
 for(i=0;i<size;i++)
	{
		if(factor[i]>digit[i])
			{
				printf(" %ld",num[i]);
			}
	}
 getch();
}