#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "string_ops.h"
#define N 100

int main(){

char word[N];
int op_choice;
char repetition[N];

do{
printf("\n This is a string manipulation project\n ");
printf("\n Enter the string you want to work on: \t");
fgets(word, N, stdin);
word[strcspn(word, "\n")] = 0;

printf("This are string operations available on this program: \t ");
printf("\n 1. Display original string");
printf("\n 2. Reverse the original string");
printf("\n 3. The String length");

printf(" \n Enter your choice: \t ");
scanf("%d", &op_choice);


if(op_choice == 1){
        original_string(word);
}
else if(op_choice == 2){
    reversed_string(word);
}
else if(op_choice == 3){
    string_counter(word);
}
else{
    printf("You inputed an incorrect input");
}

printf(" \n\n Do you wish to continue with the program:((yes/no) \t");
getchar();
fgets(repetition, N, stdin);
repetition[strcspn(repetition, "\n")] = 0;

}while((strcmp(repetition, "yes") == 0) || (strcmp (repetition, "YES") == 0));

printf("\n Nice to have you on-board\n");

return 0;
}
