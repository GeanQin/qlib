#include "qlib.h"

int qfindc(char *buf, char c, int from)
{
    int n = -1;
    int i;
    for(i = from-1; i < strlen(buf); i ++)
    {
        if(buf[i] == c)
	{
            n = i+1;
            break;
        }
    }
    return n;
}

int qsplits(char *ret, char *buf, int x, int y)
{
    if (strlen(buf) < y || x < 1 || x > y)
    {
        printf("ERR: Invalid param.");
	return -1;
    }
    int i;
    int j = 0;
    for(i = x-1; i < y; i ++)
    {
        ret[j] = buf[i];
        j = j + 1;
    }
    ret[j] = '\0';
    return 0;
}
