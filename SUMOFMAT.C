/*write a program to enter 3*3 metrix and print the sum
anthor:gohil mihir
date:21-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j,d=0;
	clrscr();
	//logic : input value into 2D arrye
	for(i=0;i<3;i++)       //     row.
	{
		for(j=0;j<3;j++)           //   column.
		{
			printf("\n enter value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)       //     row.
	{
		for(j=0;j<3;j++)           //   column.
		{
			printf("\n enter value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//print 2d arrye//
	printf("multiplication of matrics is \n");
	for(i=0;i<3;i++)       //     row.


	{
		for(j=0;j<3;j++)           //   column.
		{
			printf("%d\t",m1[i][j]);

		}

		printf("\n");
	}
	printf("multiplication of  matrics is \n");
	for(i=0;i<3;i++)       //     row.
	{
		for(j=0;j<3;j++)           //   column.
		{
			printf("%d\t",m2[i][j]);

		}
		printf("\n");
	}
	printf("multiplication of both matrics is \n");
	for(i=0;i<3;i++) //row//
	{
	for(j=0;j<3;j++) //column//
	{
			m3[i][j]=m1[i][j]*m2[i][j];
			printf("%d \t",m3[i][j]);
		}
		printf("\n");

	}
	getch();
}
