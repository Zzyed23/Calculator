#include <stdio.h>
#include <math.h>


int main ()

{
	int value1, value2, value3;
	int choice;
	int Z = 2;
	int flag = 0;
		
		do{
			
			printf("\n\n choose one of the followiing: \n 1. Division \n 2. Modulus \n 3.Addition \n 4.Subtraction \n 5. Multiplication \n");
			scanf("%d", &choice);
			if(choice ==1){
				
				printf("\n Please enter the dividend: ");
				scanf("%d", &value1);
				printf("enter the divisor:");
				scanf("%d",&value2);
				
				value3 = value1 % value2;
				if (value3 == 0 )
				{
					printf("\n %d is divisble by %d", value1 , value2);
					printf("\n %d * %d = %d", value1/value2, value1, value2 );
				}
				else
				{
					printf("\n %d is Not divisible by %d", value1, value2);
				}
				
			}
			
			else if(choice == 2){
				//modulus
				
				printf("\n choose first value");	
				scanf("%d", &value1);
				printf("\n choose second value");
				scanf("%d",&value2);
				printf("%d %%  %d = %d", value1, value2, value1%value2);
			}
			
			else if(choice == 3){
				//addition
				
				printf("\n choose first value");
				scanf("%d", &value1);
				printf("\n choose second value");
				scanf("%d",&value2);
				printf("%d + of %d = %d", value1, value2, value1+value2);
				
			}
			
			else if(choice == 4){
				//subtraction
				
				printf("\n choose first value");
				scanf("%d", &value1);
				printf("\n choose second value");
				scanf("%d",&value2);
				printf("%d - of %d = %d", value1, value2, value1-value2);
			
			}
				
			else if(choice == 5){
				//multiplication
				
				printf("\n choose first value");
				scanf("%d", &value1);
				printf("\n choose second value");
				scanf("%d",&value2);
				printf("%d * of %d = %d", value1, value2, value1*value2);
				
			}
			
		}while(choice >= 1 && choice <=5);
			
			
			return 0;
}