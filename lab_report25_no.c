#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. odd/even");
        printf("\n your Choice: ");
        scanf("%d",&choice);
        int i,n,fact = 1,a,c=2,num;
        switch(choice)
        {
            case 1: 
             printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
  for (i= 1; i <= n; i++)
    fact = fact * i;
  printf("Factorial of %d = %d\n", n, fact);
            break;
            case 2:
   printf("Enter a number to check if it is prime\n");
   scanf("%d",&a);
   for ( c = 2;c<= a-1;c++)
   {
      if ( a%c == 0 )
      {
         printf("%d is not prime.\n", a);
     break;
      }
   }
   if ( c == a)
      printf("%d is prime.\n", a);
  
            break;
            case 3:
   printf("Enter an integer\n");
   scanf("%d",&num);
   if ( num%2 == 0 )
      printf("Even\n");
   else
      printf("Odd\n");
            break;
        }
 
    }
    return 0;
}