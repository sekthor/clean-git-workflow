#include <stdio.h>

#define MIN_ARGS 2
#define ERROR_TOO_FEW_ARGUMENTS 1

int main(int argc, char **argv)
{
    if (argc < MIN_ARGS) {
        fprintf(stderr, "ERROR: Not enough arguments. Got %d, expected at least %d\n", argc - 1, MIN_ARGS - 1);
        return ERROR_TOO_FEW_ARGUMENTS;
    }
    
    printf("Hello %s\n", argv[1]);
    return 0;
}