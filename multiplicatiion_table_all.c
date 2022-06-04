#include<stdio.h>
int main(){
   int i,n,add;
   printf("Enter your favourite number: ");
   scanf("%d",&n);
   i = 1;
   for(i=1; i<=10; i++){
    add = n*i;
    printf("%d * %d = %d\n",i,n,add);
   }
   return 0;
}
