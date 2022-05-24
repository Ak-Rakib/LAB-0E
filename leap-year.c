#include <stdio.h>

int main()
{
    int year;

    printf("Type a year: ");
    scanf("%d",&year);

    if(year%400 == 0) {
        printf("%d it's a leap year",year);
    } else if(year%100 == 0) {
        printf("%d it's not a leap year", year);
    } else if (year%4 == 0){
        printf("%d it's a leap year");
    } else{
        printf("out of data");
    }
      return 0;
}
