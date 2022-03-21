#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
    printf(" %.*s ", len, msg);
    printf("%c\n", c);

    for (int i=0; i<len+4; ++i)
        printf("%c", c);
    printf("\n");


    srand(time(NULL));

    char *p = malloc(100);
    p[20] = 't';
    p[21] = 'e';
    p[22] = 's';
    p[23] = 't';
    p[24] = '\0';
    if (c == 'x') {
        for (int i=0; i<100; ++i) {
            p[rand()%1000000] = rand()%256;
        }
    }
    free(p);

    return 0;

}

