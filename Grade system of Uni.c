#include <stdio.h>

int main() {

       int quiz1,quiz2,quiz3,quiz_avg,mid,last_exam,total_marks;

       printf("Type a quiz-1 score\n: ");
       scanf("%d",&quiz1);
       

       printf("Type a quiz-2 score\n: ");
       scanf("%d",&quiz2);
       

       printf("Type a quiz-3 score\n: ");
       scanf("%d",&quiz3);
       

       quiz_avg = (quiz1+quiz2+quiz3)/3;
       printf("quiz avarage: %d\n",quiz_avg);
       
       

       printf("Type your Midterm Exam Score\n: ");
       scanf("%d",&mid);
       

       printf("Type your Final Exam Score\n: ");
       scanf("%d",&last_exam);
       

       total_marks = quiz_avg + mid + last_exam;
       printf("%d/n",total_marks);
       

       if (total_marks < 100 && total_marks >= 80) {
          printf("A+\n");
}

      else if (total_marks < 80 && total_marks >= 70) {
          printf("A-\n");
}

      else if (total_marks < 70 && total_marks >= 60) {
          printf("B\n");
}

      else if (total_marks < 60 && total_marks >= 50) {
          printf("D\n");
}

      else if (total_marks < 50 && total_marks >= 40) {
          printf("E\n");
}

      else if (total_marks < 40 && total_marks >= 0) {
          printf("F\n");

}

      else {

    printf("your are fail\n");
}

      return 0;

}