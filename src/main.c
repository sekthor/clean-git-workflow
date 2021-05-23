#include <stdio.h>
#include <string.h>
#include "main.h"


int main(int argc, char **argv)
{
    if (argc < MIN_ARGS) {
        fprintf(stderr, "ERROR: Not enough arguments. Got %d, expected at least %d\n", argc - 1, MIN_ARGS - 1);
        return EXIT_TOO_FEW_ARGUMENTS;
    }

    for (int i = 1; i < argc; i++) {

        if (!strcmp(argv[i], "--help") || !strcmp(argv[i], "-h")) {
            print_help();
            return EXIT_SUCCESS;
        }
            
        if (!strcmp(argv[i], "--version") || !strcmp(argv[i], "-v")) {
            print_version();
            return EXIT_SUCCESS;
        }
    }
    
    printf("Hello %s\n", argv[1]);
    return EXIT_SUCCESS;
}

void print_help()
{
    printf("Usage:\n"
        "main argument\n\n"
        "ARGUMENTS:\n"
        "----------\n"
        "-h  --help    print this menu\n"
        "-v  --version print version number\n");
}

void print_version()
{
    puts(VERSION);
    exit(EXIT_TOO_FEW_ARGUMENTS);
}
