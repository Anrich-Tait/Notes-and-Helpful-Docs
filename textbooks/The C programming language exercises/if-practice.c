#include <stdio.h>
#include <string.h>

int main() {

  printf("This program is a set of 10 questions, you will be prompted to give an answer. \n If the answer is incorrect you will get one more chance at an attempt. After all the questions have been answered you will be given a score out of 10\n\n");
  
  printf("1. Are you learning C? (yes/no)\n");
  char inputOne[100];
  scanf("%s", inputOne);
  if (strcmp(inputOne, "yes") == 0) {
    printf("Good, carry on!\n");
  } else {
    printf("Then this isn't for you:");
  }

  printf("2. Finish the brand name: coca-____\n");
  char inputTwo[100];
  scanf("%s", inputTwo);
  if (strcmp(inputTwo, "cola") == 0) {
    printf("Correct! Next question: \n");
  } else {
    printf("Incorrect! Try again: \n");
    scanf("%s", inputTwo);
    if (strcmp(inputTwo, "cola") == 0) {
      printf("Great! Next question: \n");
    } else {
      printf("Incorrect! Next question: \n");
    }
  }  

  printf("3. What command is used to get user-input in C? \n a: printf\n b: scanf\n c: stringcmp\n d: else if\n");
  char inputThree[100];
  scanf("%s", inputThree);
  if (strcmp(inputThree, "b") == 0) {
    printf("Correct! Next question. \n");
  } else {
    printf("Incorrect! Try again: \n");
    scanf("%s", inputThree);
    if (strcmp(inputThree, "b") == 0) {
      printf("Correct, next question!\n");
    } else {
      printf("Incorrect, next question.\n");
    }
  }
  

  
  return 0;
}
