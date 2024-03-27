#include <stdio.h>
#include <string.h>
int main() {
  char rock[] = "rock";
  char paper[] = "paper";
  char scissor[] = "scissor";
  char user_1[10];
  char user_2[10];
  int i = 0;
  int j = 0;
  printf("player 1:Enter the input:");
  scanf("%s", user_1);
  printf("player 2:Enter the input:");
  scanf("%s", user_2, "\n");
  if (strcmp(user_1, paper) == 0 && strcmp(user_2, rock) == 0) {
    printf("player 1 wins");
  } else if (strcmp(user_1, paper) == 0 && strcmp(user_2, scissor) == 0) {
    printf("player 2 wins");
  } else if (strcmp(user_1, paper) == 0 && strcmp(user_2, paper) == 0) {
    printf("TIE");
  } else if (strcmp(user_1, scissor) == 0 && strcmp(user_2, paper) == 0) {
    printf("player 1 wins");
  } else if (strcmp(user_1, scissor) == 0 && strcmp(user_2, rock) == 0) {
    printf("player 2 wins");
  } else if (strcmp(user_1, scissor) == 0 && strcmp(user_2, scissor) == 0) {
    printf("TIE");
  } else if (strcmp(user_1, rock) == 0 && strcmp(user_2, paper) == 0) {
    printf("player 2 wins");
  } else if (strcmp(user_1, rock) == 0 && strcmp(user_2, scissor) == 0) {
    printf("player 1 wins");
  } else if (strcmp(user_1, rock) == 0 && strcmp(user_2, rock) == 0) {
    printf("TIE");
  } else {
    printf("Invalid input");
  }
  return 0;
}