#include<stdio.h>
#include<math.h>
int main ()
{
int e,e1,e2,e3,e4,e5,e6,e7;
printf("Welcome To The Menu Driven Program\n");
printf("Enter the Opration you want to access\n");
printf("0.Printing Oprations\n");
printf("1.Array Oprations\n");
printf("2.Arthematic Oprations\n");
printf("3.Function Oprations\n");
printf("4.If_Else Oprations\n");
printf("5.Loop Opration\n");
printf("6.Number Oprations \n");
printf("7.Scaning Oprations\n");
printf("8.Switch Case Oprations\n");
scanf("%d",&e);
switch(e)
{
	case 1:
		{
			printf("Programs\n");
			printf("1. WAP_Hello World \n");
			printf("2. WAP_Sum_Of_Two_Digit\n");
			printf("3. WAP_Personal_DATA \n");
			printf("Enter the program you want to run\n");
			scanf("%d",&e1);
			switch(e1)
			{
			  case 1:
			  	{
					printf("HELLO WORLD");
				  	break;
			    }	
			    case 2:
				{
					float num1,num2,sum;
		    		sum=0;
				    printf("enter two numbers\n");
					scanf("%f%f",&num1,&num2);
					sum =num1+num2;
					printf("the sum =%f",sum);			  	
					break;
				}	
				case 3:
			  	{
				    printf("NAME : DIVY PRAKASH TIWARI\n");
	     			printf("E MAIL : kpsg4775@gmail.com\n");
					printf("JAMSHEDPUR ; JHARKHAND\n");
				    printf("EDUCATION : B.Tech [CSE]\n");
					printf("C.V RAMAN GLOBAL UNIVERSITY\n");
				    printf("EXPERIENCE : 12 Year's Of Studying\n");
					printf("SKILLS : Web devlopment ; Graphics\n");			  	
					break;
			    }	
				default :
					{
						printf("program choice is wrong");
					}
			}
			break;
		}
		default :
		{
			printf("Experiment choice is wrong ");
		}
}
return 0;		
}
