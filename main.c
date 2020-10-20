#include "qlib.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    char strtest[] = "qwe1qinjian1qwe";
    printf("strtest: %s\n", strtest);
    int n1 = qfindc(strtest, '1', 1);
    if(n1 > 0)
    {
        printf("第一个1在%d个.\n", n1);
    }
    int n2 = qfindc(strtest, '1', n1 + 1);
    if(n1 > 0)
    {
        printf("第二个1在%d个.\n", n2);
    }

    char splits[strlen(strtest)];
    int ret = qsplits(splits, strtest, n1 + 1, n2 - 1);
    if(ret == 0)
    {
        printf("splits: %s\n", splits);
    }
}
