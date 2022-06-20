#include <stdio.h>
int main(){
    int i,sum=0;
     int arrNum[6] = {1,2,3,4,5,6};
    
    for(i=5; i>-1 ; --i){
         printf("Reverse number:%d\n",arrNum[i]);
    
        sum = sum + arrNum[i];
         printf("This sum is: %d\n:",sum);
     }  
  return 0;
}