#include<stdio.h>
int main()
{
int choice;
float balance, amount;
printf("enter balance amount:");
scanf("%f",&balance);
printf("\n---ATM MENU---\n");
printf("1.balance enquiry\n");
printf("2.cash withdrawal\n");
printf("3.cash deposit\n");
printf("enter your choice:");
scanf("%d",choice);
switch (choice)
{
case 1:
printf("current balance:%.2f\n",balance);
break ;
case 2:
printf("enter withdrwal amount:");
scanf("%f",&amount);
if(amount>0&&amount<=balance){
balance=balance-amount;
printf("transaction successful\n");
printf("remaining balance:%.2f\n",balance);
}
else{
printf("insufficient balance\n");
}
switch (choice)
{
case3:
printf("enter deposit amount:");
scan("%f",&amount);
if (amount>0)
{
balance=balance+amount;
printf("deposit successful\n");
printf("updated balance:&.2f\n",balance);
}
else
{
printf("invalid option\n");
}
break ;
default:
printf("invalid option\n");
break ;
}
return 0;
}
}
