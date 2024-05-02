#include<stdio.h>
#include<math.h>
int main ()
{
int e,e1,e2,e3,e4,e5,e6,e7;
printf("welcome to the menu driven program\n");
printf("enter the experiment number you want to access\n");
printf("1.Experiment 1\n");
printf("2.Experiment 2\n");
printf("3.Experiment 3\n");
printf("4.Experiment 4\n");
printf("5.Experiment 5\n");
printf("6.Experiment 6\n");
printf("7.Experiment 7\n");
scanf("%d",&e);
switch(e)
{
	case 1:
		{
			printf("EXPERIMENT 1\n");
			printf("enter the program you want to run\n");
			printf("1. Program 1\n");
			printf("2. Program 2\n");
			printf("3. Program 3\n");
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
