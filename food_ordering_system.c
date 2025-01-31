#include<stdio.h>
int main(void)
{
	int menu,breakfast[4]={50,80,100,210},choose;
	int lunch[4]={ 60,60,100,250};
	int dinner[4]={100,150,500,800};
	printf("Welcome to Food Corner\n");
	printf("Press 1 to choose breakfast\n");
    printf("Press 2 to choose lunch\n");
    printf("Press 3 to choose dinner\n");
    scanf("%d",&menu);
    
    switch(menu)
{
	case 1:
		{
			printf("Breakfast includes\n");
			printf(" Press 1 to choose Veg. sandwich - Rs%d\n",breakfast[0]);
			printf(" Press 2 to choose kulche cholle  - Rs%d\n",breakfast[1]);
			printf(" Press 3 to choose Pav bhaji - Rs%d\n",breakfast[2]);
			printf(" press 4 to choose combo - Rs%d\n",breakfast[3]);
			printf("This combo includes 1 veg sandwich , kulche cholle , Pav bhaji and any beverage of your choice\n");
			 scanf("%d",&choose);
			 if( choose == 1 )
			 {
			 	printf("Your order of veg.Sandwich has been confirmed\n");
			 	printf("Total bill is of Rs%d",breakfast[0]);
			 }
			 else
			 {
			 	if (choose ==2 )
			 	{
			 		printf("Your order of kulche cholle has been confirmed\n");
				    printf("Total bill is of Rs%d",breakfast[1]);
				 }
				 else{
				 	if( choose == 3)
				 	{
				 		printf("Your order of Pav bhaji has been confirmed\n");
				 		printf("Total bill is  Rs%d",breakfast[2]);
					 }
					 else{
					 	if (choose == 4 )
					 	{
					 		printf("Your combo has been placed\n");
					 		printf("Total bill is Rs%d",breakfast[3]);
					 		
						 }
						 else{
						 	if (choose!=1 && choose!=2 && choose!=3 && choose!=4)
						 	{
						 	printf("Error");
						 }
					 	
					 }
				 }
			 }
			
		break;
		}
case 2:
		{
			printf("Lunch includes\n");
			printf(" Press 1 to choose kadhirice - Rs%d\n",lunch[0]);
			printf(" Press 2 to choose rajmarice  - Rs%d\n",lunch[1]);
			printf(" Press 3 to choose Masalabhindi and chanadal - Rs%d\n",lunch[2]);
			printf(" press 4 to choose combo - Rs%d\n",breakfast[3]);
			printf("This combo includes kadhirice , rajmarice ,masalbhindi and any beverage of your choice\n");
			 scanf("%d",&choose);
			 if( choose == 1 )
			 {
			 	printf("Your order of kadhirice has been confirmed\n");
			 	printf("Total bill is of Rs%d",lunch[0]);
			 }
			 else
			 {
			 	if (choose ==2 )
			 	{
			 		printf("Your order of rajmarice has been confirmed\n");
				    printf("Total bill is of Rs%d",lunch[1]);
				 }
				 else{
				 	if( choose == 3)
				 	{
				 		printf("Your order of masalbhindi and chanadal has been confirmed\n");
				 		printf("Total bill is  Rs%d",lunch[2]);
					 }
					 else{
					 	if (choose == 4 )
					 	{
					 		printf("Your combo has been placed\n");
					 		printf("Total bill is Rs%d",lunch[3]);
					 		
						 }
						 	 else{
						 	if (choose!=1 && choose!=2 && choose!=3 && choose!=4)
						 	{
						 	printf("Error");
						 }
					 	
					 }
					 	
					 }
				 }
			 }
			
		break;
		}
		
}
case 3:
		{
			printf("dinner includes\n");
			printf(" Press 1 to choose vegetable salad - Rs%d\n",dinner[0]);
			printf(" Press 2 to choose fruitsalad  - Rs%d\n",dinner[1]);
			printf(" Press 3 to choose dalmakhani and malai chaap - Rs%d\n",dinner[2]);
			printf(" press 4 to choose combo - Rs%d\n",dinner[3]);
			printf("This combo includes vegetable salad, fruitsalad ,dalmakhani and malai chaap and any beverage of your choice\n");
			 scanf("%d",&choose);
			 if( choose == 1 )
			 {
			 	printf("Your order of vegetable salad has been confirmed\n");
			 	printf("Total bill is of Rs%d",dinner[0]);
			 }
			 else
			 {
			 	if (choose ==2 )
			 	{
			 		printf("Your order of fruitsalad has been confirmed\n");
				    printf("Total bill is of Rs%d",dinner[1]);
				 }
				 else{
				 	if( choose == 3)
				 	{
				 		printf("Your order of dalmakhani and malai chaap has been confirmed\n");
				 		printf("Total bill is  Rs%d",dinner[2]);
					 }
					 else{
					 	if (choose == 4 )
					 	{
					 		printf("Your combo has been placed\n");
					 		printf("Total bill is Rs%d",dinner[3]);
					 		
						 }
						 	 else{
						 	if (choose!=1 && choose!=2 && choose!=3 && choose!=4)
						 	{
						 	printf("Error");
						 }
					 	
					 }
					 	
					 }
				 }
			 }
			
		break;
		}
		default:
			{
				printf("ERROR");
			}





}
return 0;
}
