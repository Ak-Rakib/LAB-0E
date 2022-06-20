#include<stdio.h>
int main(){
 int num,reminder, orginalNum, result = 0;
 printf("Enter a number: ");
 scanf("%d",&num);
 orginalNum = num;

 while(orginalNum != 0){
    reminder = orginalNum % 10;
    result+= reminder*reminder*reminder;
    orginalNum/=10;
 }
 if(result == num){
    printf("%d This is armstrong number",num);
 } else{
    printf("%d isn't armstrong number",num);
 }
 return 0;
}
