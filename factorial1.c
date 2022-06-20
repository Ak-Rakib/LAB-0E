# include<stdio.h>
int main()
{
    int a,n,fact=1;
    printf("Enter a factorial numbers : ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        fact = fact * a;
        printf("factorial of %d = %d\n",a,fact);

    }
    return 0;
}
