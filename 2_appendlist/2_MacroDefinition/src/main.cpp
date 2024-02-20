#include <stdio.h>
#define NUMBER  3

int main()
{
    int a = 10;
#ifdef DEBUG_LAG
    printf("The test demo for the Macrodefine\n");
#endif

    for(int i=0; i<NUMBER; ++i)
    {
        printf("hello, world!!!\n");
    }
    return 0;
}