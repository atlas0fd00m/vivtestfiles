#ifdef __linux
#else
#include <windows.h>
#endif

#include <stdio.h>

/*
    To update this file you must build it for multiple platforms.
    cl /Fehello_<arch>.exe helloworld.c
 */

int main(int argc, char **argv) {
    printf("hello world!\n");
    return(0);
}
