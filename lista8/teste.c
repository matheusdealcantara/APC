#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 123123;
    int div = x%10000;
    printf("%d\n", div/100);
    return 0;
}
