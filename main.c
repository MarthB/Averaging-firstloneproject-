/* This program calculates either the average of a test based on 4 marks on a test:
Comm, App, K/u and thinking or it will calculate an average of up to 6 marks. */

#include <stdio.h>


main()
{
    //integers for the program
    int subjectNum;
    float communicationMark, applicationMark, knowledgeMark, thinkingMark;
    float grade1, grade2, grade3;
    float grade4, grade5, grade6;
    float testAverage, averageGrade;
    char ans;
    //asking if using the test mark calculator or the general mark calculator

    printf("Are you calculating a Test average (Y/N)?\n");
    scanf(" %c", &ans);

    //asking for marks on the different sections on the test and storing them

    if(ans == 'Y')
    {
      printf("What did you get on the communication section (between 0 and 100)?");
      scanf(" %f", &communicationMark);
      printf("What did you get on the Application section (between 0 and 100)?");
      scanf(" %f", &applicationMark);
      printf("What did you get on the Knowledge/Understanding section (between 0 and 100)?");
      scanf(" %f", &knowledgeMark);
      printf("What did you get on the Thinking section (between 0 and 100)?");
      scanf(" %f", &thinkingMark);

      //calculating test average and using printf() to inform the user of their mark

      testAverage = (communicationMark+applicationMark+knowledgeMark+thinkingMark)/4;

      printf("Your average is %.1f.\n", testAverage);

    }
    //general mark based on up to 6 marks starts here
    else
    {
        printf("How many marks do you have to input (2-6)?\n");
        scanf(" %d", &subjectNum);

      //failsafe lol  for those people who do not know how many marks it take to average
      if (subjectNum == 1)
      {
          printf("You cannot average one number.\n");
      }
      //for 2 marks
      else if (subjectNum == 2)
      {
          printf("What is the first mark?\n");
          scanf(" %f", &grade1);
          printf("What is the second mark?\n");
          scanf(" %f", &grade2);

          averageGrade = ((grade1+grade2)/subjectNum);
          printf("Your average grade is %.1f.\n", averageGrade);
      }

      else if (subjectNum == 3)
      {
          printf("What is the first mark?\n");
          scanf(" %f", &grade1);
          printf("What is the second mark?\n");
          scanf(" %f", &grade2);
          printf("What is the third mark?\n");
          scanf(" %f", &grade3);

          averageGrade = ((grade1+grade2+grade3)/subjectNum);

          printf("Your average grade is %.1f.\n", averageGrade);
      }

      else if (subjectNum == 4)
      {
          printf("What is the first mark?\n");
          scanf(" %f", &grade1);
          printf("What is the second mark?\n");
          scanf(" %f", &grade2);
          printf("What is the third mark?\n");
          scanf(" %f", &grade3);
          printf("What is the fourth mark?\n");
          scanf(" %f", &grade4);
          averageGrade = ((grade1+grade2+grade3+grade4)/subjectNum);

          printf("Your average grade is %.1f.\n", averageGrade);
      }

       else if (subjectNum == 5)
      {
          printf("What is the first mark?\n");
          scanf(" %f", &grade1);
          printf("What is the second mark?\n");
          scanf(" %f", &grade2);
          printf("What is the third mark?\n");
          scanf(" %f", &grade3);
          printf("What is the fourth mark?\n");
          scanf(" %f", &grade4);
          printf("What is the fifth mark?\n");
          scanf(" %f", &grade5);

          averageGrade = ((grade1+grade2+grade3+grade4+grade5)/subjectNum);

          printf("Your average grade is %.1f.\n", averageGrade);
      }

    else if (subjectNum == 6)
      {
          printf("What is the first mark?\n");
          scanf(" %f", &grade1);
          printf("What is the second mark?\n");
          scanf(" %f", &grade2);
          printf("What is the third mark?\n");
          scanf(" %f", &grade3);
          printf("What is the fourth mark?\n");
          scanf(" %f", &grade4);
          printf("What is the fifth mark?\n");
          scanf(" %f", &grade5);
          printf("What is the sixth mark?\n");
          scanf(" %f", &grade6);

          averageGrade = ((grade1+grade2+grade3+grade4+grade5+grade6)/subjectNum);

          printf("Your average grade is %.1f.\n", averageGrade);
      }
      else
      {
          printf("This program can only calculate your average up to 6 marks.");
      }
    }

    return 0;
}
