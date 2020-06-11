#include <stdio.h>
/**
 * cmd as administrator
 * add system env:
 *   MSYS64_HOME=C:\DEVPACK\msys64
 *   Path=...;C:\DEVPACK\msys64\usr\bin
 * mklink /J "/C" "C:\"
 */
int main(int argc, char *argv[])
{
    int a = 25;
    printf("hello vscode %d.\n", a);
    return 0;
}