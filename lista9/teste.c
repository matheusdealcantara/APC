#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1023;
    int *p = &i;
    printf("%d\n", p[0]);
    return 0;
}
