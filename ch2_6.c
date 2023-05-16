#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cwd;

    cwd = getcwd(NULL, BUFSIZ);
    printf("1. 현재 디렉토리는 : %s\n", cwd);

    chdir("bit");

    cwd = getcwd(NULL, BUFSIZ);
    printf("2. 변경된 디렉토리는 : %s\n", cwd);

    free(cwd);
}