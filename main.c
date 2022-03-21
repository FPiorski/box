#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{

    char c = '#', *msg = NULL;

    if (argc < 2 || argc > 3){
        printf("USAGE: %s [c] \"message\" - print supplied message surrounded with an ASCII box made of 'c'\n", argv[0]);
        return -1;
    }

    if (argc == 3) {
        c = argv[1][0];
        msg = argv[2];
    } else
        msg = argv[1];

    size_t len = strnlen(msg, 76);

    for (int i=0; i<len+4; ++i)
        printf("%c", c);
    printf("\n");

    printf("%c", c);
    printf(" %s ", msg);
    printf("%c\n", c);

    for (int i=0; i<len+4; ++i)
        printf("%c", c);
    printf("\n");

    return 0;

}

