#include<stdio.h>
int main(){
  int n,reminder, reverse = 0;

  printf("Enter a number: ");
  scanf("%d",&n);

  while(n != 0){
    reminder = n % 10;
    reverse = reverse * 10 + reminder;
    n/= 10;
  }
  printf("This is reverse number: %d\n", reverse);
  return 0;
}
