#include "string_ops.h"
#define N 100

// for the original string
void original_string(char original[N]){
printf("\n The Original inputed word: %s", original);
}

//for the reversed string
void reversed_string(char original[N]){
int total_length = strlen(original);
printf("\n The reversed form of the word inputed is: \t ");
for (int i = (total_length - 1); i >= 0; i--){
    printf("%c", original[i]);
}
}

// for the full length of the text
void string_counter(char original[N]){
    printf("\n The length of the original inputed word is: %d", strlen(original));
}


