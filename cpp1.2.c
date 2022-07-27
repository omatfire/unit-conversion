/*currency conversion*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	float ans,ans1,ru;
	int ch;
	do
	{
		printf("\n\n 1.Rupees -> Doller");
		printf("\n\n 2.Doller -> Ruppes");
		printf("\n\n 3.Rupees -> AED");
		printf("\n\n 4.AED -> Ruppes");
		printf("\n\n 5. Exit");
		printf("\n\nEnter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/80;
				printf("\n\nThe currency is doller is= %.2f$",ans);
				break;
			case 2:printf("\n\nEnter the currency in Doller=");
				scanf("%f",&ru);
				ans=ru*80;
				printf("\n\nThe currency in Ruppes is= %.2f",ans);
				break;
			case 3:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/21;
				printf("\n\nThe currency is AED is= %.2f",ans);
				break;
			case 4:printf("\n\nEnter the currency in AED=");
				scanf("%f",&ru);
				ans=ru*21;
				printf("\n\nThe currency in Ruppes is= %.2f",ans);
				break;
			case 5:exit(0);
		}
	}while(ch<6);
}